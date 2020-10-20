#include <stdbool.h>

double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int num);

bool mx_is_mersenne(int n) {
    if (n <= 0) return false;
    for (int i = 2; i <= n; i++) {
        if (mx_is_prime(i) == true) {
            double num = mx_pow(2, i) - 1;
            if (num == n) return true;
        }
    }
    return false;
}
