#include <stdbool.h>
double mx_pow(double n, unsigned int pow);
bool mx_is_narcissistic(int num) {
    int col = 0;
    int temp = num;
    int temp1 = num;
    int sum = 0;
    if (num <= 0) return false;
	while (temp!= 0) {
		col += 1;
		temp = temp / 10;
	}
    for (int i = 0; i < col; i++) {
        sum += mx_pow(temp1 % 10, col);
        temp1 = temp1 / 10;
    }
    if (sum == num) return true;
    else return false;
}
