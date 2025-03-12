#include "utils.h"
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void shuffle_inplace(void *array, size_t n, size_t elsize) {
    if (n <= 1) {
            return;
    }
    char tmp[elsize];
    char *arr = array;
    size_t stride = elsize * sizeof(char);
    for (size_t i = n-1; i > 0; --i) {
            size_t j = ((size_t) rand()) % (i + 1);
            memcpy(tmp, arr + i * stride, elsize);
            memcpy(arr + i * stride, arr + j * stride, elsize);
            memcpy(arr + j * stride, tmp, elsize);
    }
}
