#ifndef _UTILS_H
#define _UTILS_H
//#include <rte_random.h>
#include <string.h>
#include <stddef.h>
/*Given a list of n elements in contigous memory,
* permute the list inplace using the Fisher-Yates algorithm.*/
void shuffle_inplace(void *list, size_t n, size_t el_size);
#endif
