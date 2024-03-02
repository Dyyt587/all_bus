/*
 * @Author: Dyyt587 67887002+Dyyt587@users.noreply.github.com
 * @Date: 2024-02-29 16:44:40
 * @LastEditors: Dyyt587 805207319@qq.com
 * @LastEditTime: 2024-03-02 17:13:35
 * @FilePath: \all_bus\example\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include "abus.h"
#include "accounter.h"
/*
待完成项

完成fifo测试   ok
    添加fifo 循环覆盖 满停止等功能

添加调试输出的函数
    添加发布者订阅数量和类型输出
    添加过程调试
1.实现守护线程
2.实现异步发布
3.实现跨机通讯
4.实现过滤器


*/
int test_callback(abus_accounter_t*publicer ,subscriber_t* subscriber, abus_args_t*args)
{
    static int counter = 0;
    printf("%s %d ",args->data,counter++);
    printf("buf in %d out %d size %d\r\n",subscriber->accounter->fifo_input->in,
    subscriber->accounter->fifo_input->out,
    afifo_get_used(subscriber->accounter->fifo_input));

}

int main()
{
    char str[]="acc public data";
    printf("hello world\r\n");

    struct afifo*fifo1 = afifo_alloc(1024,0);
    struct afifo*fifo2 = afifo_alloc(1024,0);
    struct afifo*fifo3 = afifo_alloc(1024,0);
    struct afifo*fifo4 = afifo_alloc(1024,0);
    abus_accounter_cfg cfg ={.flag.flag_is_async=0,
                             .fifo_input=fifo1,
                             .fifo_output=0};
    abus_accounter_t* acc = abus_accounter_create("accounter0",&cfg);
    cfg.fifo_input = fifo2;
    abus_accounter_t* acc1 = abus_accounter_create("accounter1",&cfg);
    cfg.fifo_input = fifo3;

    abus_accounter_t* acc2 = abus_accounter_create("accounter2",&cfg);
    cfg.fifo_input = fifo4;
    abus_accounter_t* acc3 = abus_accounter_create("accounter3",&cfg);
    subscriber_t sub1={.accounter = acc1,.callback = test_callback,.type.flag_is_async=0};
    abus_subscribe(acc,&sub1);
    sub1.accounter = acc2;
    abus_subscribe(acc,&sub1);
    abus_public(acc,str,sizeof(str));
    return 0;
}