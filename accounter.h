/**
 * @file accounter.h
 * @author Dyyt587 (67887002+Dyyt587@users.noreply.github.com)
 * @brief
 * @version 0.1
 * @date 2024-02-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#ifndef ACCOUNTER_H
#define ACCOUNTER_H
#if defined(__cplusplus)
extern "C"
{
#endif
#include "cvector.h"
#include "abus.h"
    typedef struct abus_bus abus_bus_t;
    typedef struct abus_accounter abus_accounter_t;
    typedef enum
    {
        /*
        包含同步带缓存，同步不带缓存，异步，同步引用，异步引用


        */
        NORMAL = 0,
        SYNC = 0,
        ASYNC = 1,
        NOCACHE = 0 << 1,
        CACHE = 1 << 1,

        NOREF = 0 << 2,
        REF = 1 << 2,

        SYNC_WITH_CACHE = SYNC | CACHE,
        SYNC_WITHOUT_CACHE = SYNC | NOCACHE,
        SYNC_WITH_CACHE_REF = SYNC | CACHE | REF,
        SYNC_WITH_CACHE_BUT_REF = SYNC | CACHE | NOREF,
        ASYNC_WITH_CACHE_REF = ASYNC | CACHE | REF,
        ASYNC_WITH_CACHE = ASYNC | CACHE
    } abus_subscriber_type;

    //     TYPE_SYNC_WITH_CACHE, //内容将会拷贝一份到订阅者的缓存中
    //     TYPE_SYNC_WITHOUT_CACHE,//内容将会直接传递给订阅者
    //     TYPE_SYNC_WITH_CACHE_REF,//内容的引用将会传递给订阅者，拷贝到订阅者的缓存中
    //     TYPE_SYNC_WITH_CACHE_BUT_REF,//内容的引用将会传递给订阅者，拷贝到订阅者的缓存中

    //     TYPE_ASYNC,//异步方式，数据将交由deamon线程处理，数据会被拷贝一份到订阅者的缓存中
    //     TYPE_ASYNC_WITH_CACHE_REF//内容的引用将会传递给deamon，拷贝到订阅者的缓存中

    // }abus_subscriber_type;
    typedef struct
    {
        int id;
        char *name;
        abus_subscriber_type type;
        void *data;
        size_t size;
        void *(*callback)(void *data);
    } subscriber_t;

    typedef struct abus_accounter
    {
        int id;
        char *name;
        abus_bus_t* bus;

#if ABUS_USE_CVECTOR
        cvector subscribers;
#else
    subscriber_t *subscribers;
#endif
    } abus_accounter_t;

    int abus_public(abus_accounter_t *publicer, void *data, size_t size, abus_subscriber_type type);
    int abus_subscribe(abus_accounter_t* publicer, subscriber_t* subscriber, void* (*callback)(void* data));
    int abus_unsubscribe(abus_accounter_t* publicer, subscriber_t* subscriber);
    abus_accounter_t* abus_accounter_create(const char* name);
    void abus_accounter_destroy(abus_accounter_t* accounter);
    abus_accounter_t* abus_accounter_find(const char* name);    
    abus_accounter_t* abus_accounter_find_by_id(int id);

#if defined(__cplusplus)
}
#endif
#endif