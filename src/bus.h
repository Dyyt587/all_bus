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
extern "C" {
#endif
#include "bus.h"
#include"accounter.h"
#if ABUS_USE_CVECTOR
#include"cvector.h"
#endif
	typedef struct abus_bus{
		const char* name;
#if ABUS_USE_CVECTOR
        cvector accounters;
#else
        abus_accounter_t* accounters;
        size_t accounters_size;
#endif
	}abus_bus_t;//总线
    abus_bus_t* abus_bus_create(const char* name);
    abus_bus_t* abus_bus_init(abus_bus_t* bus, const char* name);
    void abus_bus_destroy(abus_bus_t* bus);
    int abus_bus_add_accounter(abus_bus_t* bus,abus_accounter_t* accounter);
    int abus_bus_remove_accounter(abus_bus_t* bus,abus_accounter_t* accounter);
    bool abus_bus_find_accounter(abus_bus_t* bus,abus_accounter_t* accounter);
    abus_accounter_t* abus_bus_find_accounter_by_name(abus_bus_t* bus,const char* name);
    abus_accounter_t* abus_bus_find_accounter_by_id(abus_bus_t* bus,int id);
    

	
#if defined(__cplusplus)
}
#endif
#endif