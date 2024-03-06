/*
 * @Author: Dyyt587 67887002+Dyyt587@users.noreply.github.com
 * @Date: 2024-02-29 16:44:40
 * @LastEditors: Dyyt587 67887002+Dyyt587@users.noreply.github.com
 * @LastEditTime: 2024-03-05 17:33:27
 * @FilePath: \all_bus\src\bus.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/**
 * @file bus.h
 * @author Dyyt587 (67887002+Dyyt587@users.noreply.github.com)
 * @brief
 * @version 0.1
 * @date 2024-02-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#ifndef BUS_H
#define BUS_H
#if defined(__cplusplus)
extern "C"
{
#endif
#include "bus.h"
#include "accounter.h"
#if ABUS_USE_CVECTOR
#include "cvector.h"
#endif
typedef struct{
abus_accounter_t *publicer;
subscriber_t *subscriber;
abus_args_t args;

}abus_async_package_t;
//异步通讯使用内存池分配块模式实现数据传递，这样可以减少内存碎片
//对于异步订阅者使用缓存方式支持直接复制到缓存进一步提高效率
//分配得到的数据块在使用完毕后会自动释放    
typedef struct{
    /*agenter,*/
    abus_accounter_t accounter;
    cvector sub_async_task; //abus_async_package_t数组
}abus_deamon_t;
    typedef struct abus_bus
    {
        const char *name;
        abus_deamon_t deamon;
#if ABUS_USE_CVECTOR
        cvector accounters;
#else
    abus_accounter_t *accounters;
    size_t accounters_size;
#endif
    } abus_bus_t; // 总线


    abus_bus_t *abus_bus_init(const char *name);
    void abus_bus_destroy(void);
    int abus_bus_add_accounter(abus_accounter_t *accounter);
    int abus_bus_remove_accounter(abus_accounter_t *accounter);
    bool abus_bus_find_accounter(abus_accounter_t *accounter);
    abus_accounter_t *abus_bus_find_accounter_by_name(const char *name);
    abus_accounter_t *abus_bus_find_accounter_by_id(int id);

    int abus_deamon_init(void);

#if defined(__cplusplus)
}
#endif
#endif