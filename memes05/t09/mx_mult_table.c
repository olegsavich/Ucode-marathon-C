#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
int mx_atoi(const char *str);
void mx_printint(int n);
bool mx_isdigit(int c);
int main(int argc, char const *argv[]) {
    int mult_table[9][9];
    int min;
    int max;
    if (argc != 3)
        return -1;
    if (!mx_isdigit(mx_atoi(argv[1]) + '0') || !mx_isdigit(mx_atoi(argv[2]) + '0'))
        return -1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            mult_table[i][j] = (i + 1) * (j + 1);
        }
    }
    min = mx_atoi(argv[1]);
    max = mx_atoi(argv[2]);
    if (max < min) {
        min = mx_atoi(argv[2]);
        max = mx_atoi(argv[1]);
    }
    for (int i = min; i <= max; i++) {
        for (int j = min; j <= max; j++) {
            mx_printint(mult_table[i - 1][j - 1]);
            if (j != max)
                write(1, "\t", 1);
        }
        write(1, "\n", 1);
    }
    return 0;
}
