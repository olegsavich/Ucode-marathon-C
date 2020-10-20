#include <stdbool.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {
    for (int i = 0; i < size; i++) {
        if (compare(arr[i], x))
            return i;
    }
    return -1;
}
