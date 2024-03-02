/**
 * @file bus.c
 * @author Dyyt587 (67887002+Dyyt587@users.noreply.github.com)
 * @brief
 * @version 0.1
 * @date 2024-02-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "bus.h"

abus_bus_t __bus;
abus_bus_t *bus = &__bus;
abus_bus_t *abus_bus_init(const char *name)
{
    ABUS_ASSERT(bus);
    {
        bus->name = name;
#if ABUS_USE_CVECTOR
        bus->accounters = cvector_create(sizeof(abus_accounter_t));
#else
        bus->accounters = NULL;
        bus->accounters_size = 0;
#endif
    }
    return bus;
}
void abus_bus_destroy(void)
{
    ABUS_ASSERT(bus);
    {
#if ABUS_USE_CVECTOR
        cvector_destroy(bus->accounters);
#else
        free(bus->accounters);
#endif
        ABUS_FREE(bus);
    }
}

int abus_bus_add_accounter(abus_accounter_t *accounter)
{
    ABUS_ASSERT(bus);
    {
#if ABUS_USE_CVECTOR
        cvector_pushback(bus->accounters, accounter);
#else
        bus->accounters = (abus_accounter_t *)realloc(bus->accounters, sizeof(abus_accounter_t) * (cvector_size(&bus->accounters) + 1));
        if (bus->accounters)
        {
            bus->accounters[cvector_size(&bus->accounters)] = *accounter;
        }
        else
        {
            return -1;
        }
#endif
    }
    return 0;
}
int abus_bus_remove_accounter(abus_accounter_t *accounter)
{
    ABUS_ASSERT(bus);
    {
#if ABUS_USE_CVECTOR
        cvector_rm(bus->accounters, accounter);
#else
        for (int i = 0; i < bus->accounters_size; i++)
        {
            if (bus->accounters[i].id == accounter->id)
            {
                for (int j = i; j < bus->accounters_size - 1; j++)
                {
                    bus->accounters[j] = bus->accounters[j + 1];
                }
                bus->accounters = (abus_accounter_t *)realloc(bus->accounters, sizeof(abus_accounter_t) * (bus->accounters_size - 1));
                return 0;
            }
        }
#endif
    }
    return -1;
}
bool abus_bus_find_accounter(abus_accounter_t *accounter)
{
    ABUS_ASSERT(bus);
    {
#if ABUS_USE_CVECTOR
        for (citerator i = cvector_begin(bus->accounters); i < cvector_end(bus->accounters); i = cvector_next(bus->accounters, i))
        {

            if (((abus_accounter_t *)i) == accounter)
            {
                return true;
            }
        }
#else
        for (int i = 0; i < bus->accounters_size; i++)
        {
            if (bus->accounters[i].id == accounter->id)
            {
                return true;
            }
        }
#endif
        return false;
    }
    return false;
}

abus_accounter_t *abus_bus_find_accounter_by_name(const char *name)
{
    ABUS_ASSERT(bus);
    {
#if ABUS_USE_CVECTOR
        for (citerator i = cvector_begin(bus->accounters); i < cvector_end(bus->accounters); i = cvector_next(bus->accounters, i))
        {

            if (strcmp(((abus_accounter_t *)i)->name, name) == 0)
            {
                return ((abus_accounter_t *)i);
            }
        }

#else
        for (int i = 0; i < bus->accounters_size; i++)
        {
            if (strcmp(bus->accounters[i].name, name) == 0)
            {
                return &bus->accounters[i];
            }
        }
#endif
        return NULL;
    }
    return NULL;
}

abus_accounter_t *abus_bus_find_accounter_by_id(int id)
{
    ABUS_ASSERT(bus);
    {
#if ABUS_USE_CVECTOR
        for (citerator i = cvector_begin(bus->accounters); i < cvector_end(bus->accounters); i = cvector_next(bus->accounters, i))
        {

            if (((abus_accounter_t *)i)->id == id)
            {
                return ((abus_accounter_t *)i);
            }
        }
#else
        for (int i = 0; i < bus->accounters_size; i++)
        {
            if (bus->accounters[i].id == id)
            {
                return &bus->accounters[i];
            }
        }
#endif
    }
    return NULL;
}

int abus_deamon_init(void)
{
    struct afifo *fifo1 = afifo_alloc(1024);
    struct afifo *fifo2 = afifo_alloc(1024);
    abus_accounter_cfg cfg = {.flag.flag_is_async = 1,
                              .fifo_input = fifo1,
                              .fifo_output = fifo2};
    abus_accounter_init(&__bus.accounters, "deamon acc", &cfg);
}