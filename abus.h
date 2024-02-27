/**
 * @file abus.h
 * @author Dyyt587 (67887002+Dyyt587@users.noreply.github.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef ABUS_H
#define ABUS_H
#if defined(__cplusplus)
extern "C" {
#endif
#include <stdbool.h>
#define ABUS_USE_CVECTOR 1

#define ABUS_VERSION "0.1"
#define ABUS_VERSION_MAJOR 0
#define ABUS_VERSION_MINOR 1
#define ABUS_VERSION_PATCH 0

#define ABUS_ASSERT(x) if(!(x)){    \
    while(1);                       \
}   

#define ABUS_MALLOC(size) malloc(size)
#define ABUS_FREE(ptr) free(ptr)

#if defined(__cplusplus)
}
#endif
#endif