/**
 * @file accounter.c
 * @author Dyyt587 (67887002+Dyyt587@users.noreply.github.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "accounter.h"
#include "bus.h"


    int abus_subscribe(abus_accounter_t* publicer, subscriber_t* subscriber)
    {
        //根据订阅者类型添加到缓存
        if(subscriber->type.flag_is_async){
            cvector_pushback(publicer->sub_async,subscriber);
        }else{
            cvector_pushback(publicer->sub_sync,subscriber);
        }
        return 0;
    }
    int abus_unsubscribe(abus_accounter_t* publicer, subscriber_t* subscriber)
    {
        if(subscriber->type.flag_is_async){
            cvector_rm(publicer->sub_async,subscriber);
        }else{
            cvector_rm(publicer->sub_sync,subscriber);
        }
        return 0;
    }

    int abus_subscribe_by_name(const char* publicer, const char* subscriber,subscriber_t*cfg)
    {
        abus_accounter_t*pub =  abus_bus_find_accounter_by_name(publicer);
        abus_accounter_t*sub =  abus_bus_find_accounter_by_name(subscriber);

        if(pub && sub){
            cfg->accounter = sub;
            return abus_subscribe(pub,cfg);
        }else return -1;
    }
    int abus_unsubscribe_by_name(const char* publicer, const char* subscriber)
    {
        abus_accounter_t*pub =  abus_bus_find_accounter_by_name(publicer);
        abus_accounter_t*sub =  abus_bus_find_accounter_by_name(subscriber);
        //TODO:在缓存里面遍历并且删除
    }

    int abus_accounter_config(const char* name,flag_t* config)
    {
        abus_accounter_t*sub =  abus_bus_find_accounter_by_name(name);
        //TODO:在发布者里面找到订阅者
    }


        int abus_public(abus_accounter_t *publicer, void *data, size_t size)
        {
            
        }