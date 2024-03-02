/*
 * @Author: Dyyt587 67887002+Dyyt587@users.noreply.github.com
 * @Date: 2024-02-29 16:44:40
 * @LastEditors: Dyyt587 805207319@qq.com
 * @LastEditTime: 2024-03-02 17:13:53
 * @FilePath: \all_bus\src\accounter.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
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
#include "cvector.h"

int abus_subscribe(abus_accounter_t *publicer, subscriber_t *subscriber)
{
    // 根据订阅者类型添加到缓存
    if (subscriber->type.flag_is_async)
    {
        cvector_pushback(publicer->sub_async, subscriber);
    }
    else
    {
        cvector_pushback(publicer->sub_sync, subscriber);
    }
    return 0;
}
int abus_unsubscribe(abus_accounter_t *publicer, subscriber_t *subscriber)
{
    if (subscriber->type.flag_is_async)
    {
        cvector_rm(publicer->sub_async, subscriber);
    }
    else
    {
        cvector_rm(publicer->sub_sync, subscriber);
    }
    return 0;
}

int abus_subscribe_by_name(const char *publicer, const char *subscriber, subscriber_t *cfg)
{
    abus_accounter_t *pub = abus_bus_find_accounter_by_name(publicer);
    abus_accounter_t *sub = abus_bus_find_accounter_by_name(subscriber);

    if (pub && sub)
    {
        cfg->accounter = sub;
        return abus_subscribe(pub, cfg);
    }
    else
        return -1;
}
int abus_unsubscribe_by_name(const char *publicer, const char *subscriber)
{
    abus_accounter_t *pub = abus_bus_find_accounter_by_name(publicer);
    abus_accounter_t *sub = abus_bus_find_accounter_by_name(subscriber);
    // TODO:在缓存里面遍历并且删除
}

int abus_accounter_config(const char *name, abus_accounter_cfg* config)
{
    abus_accounter_t *sub = abus_bus_find_accounter_by_name(name);
    // TODO:在发布者里面找到订阅者
}

int abus_public(abus_accounter_t *publicer, void *data, size_t size)
{
    abus_args_t args;
    //先遍历同步订阅者
    for (size_t i = 0; i <cvector_length(publicer->sub_sync); i++)
    {
        subscriber_t *sub = (subscriber_t*)cvector_at(publicer->sub_sync, i);
        if (sub->type.flag_is_async)
        {
            continue;
        }
        if(sub->accounter->fifo_input){
            afifo_in(sub->accounter->fifo_input,data,size);
        }
        args.data = data;
        args.size = size;
        sub->callback ? sub->callback(publicer,sub,&args): 0;
    }
    return 0;
}
abus_accounter_t* abus_accounter_init(abus_accounter_t*accounter,const char* name,abus_accounter_cfg* config)
{
        if(accounter){
        accounter->name = name;
        accounter->fifo_input = config->fifo_input;
        accounter->fifo_output = config->fifo_output;\

        accounter->sub_async = cvector_create(sizeof(subscriber_t));
        accounter->sub_sync = cvector_create(sizeof(subscriber_t));


        return accounter;
    }
}

abus_accounter_t* abus_accounter_create(const char* name,abus_accounter_cfg* config)
{
    abus_accounter_t* accounter = malloc(sizeof(abus_accounter_t));
    return abus_accounter_init(accounter,name,config);
}
