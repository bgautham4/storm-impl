#include "utils.h"
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void shuffle_inplace(void *list, size_t n, size_t size) {
    char tmp[size];
    char *arr = list;
    size_t stride = size * sizeof(char);

    if (n <= 1) {
        return;
    }

    size_t i;
    for (i = 0; i < n - 1; ++i) {
        size_t rnd = (size_t) rand();
        size_t j = i + rnd / (RAND_MAX / (n - i) + 1);

        memcpy(tmp, arr + j * stride, size);
        memcpy(arr + j * stride, arr + i * stride, size);
        memcpy(arr + i * stride, tmp, size);
    }
}
