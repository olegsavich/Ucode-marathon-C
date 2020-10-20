#include <time.h>
double mx_timer(void (*f)()) {
    clock_t start, stop;
    start = clock();
    f();
    stop = clock();
    return (double) ((stop - start) / CLOCKS_PER_SEC);
}
