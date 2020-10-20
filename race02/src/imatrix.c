#include "../inc/header.h"

char **cmatrix (char *res, int *ryad, int *stovb) {
    int i;
    int s = 0;
    int r = 0;

    for (i = 0; res[i] != '\0'; ++i) {
        if (res[i] == '\n') {
           ++r;
        }
    }
    s = (i - r) / r;

    char **mat = (char **)malloc(r * sizeof(char*));

    for (int i = 0; i < r; i++) {
        mat[i] = (char*)malloc(s * sizeof(char*));
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < s; ++j) {
            if (i == 0) {
                if (res[j] == '#') {
                    mat[i][j] = '#';
                }
                else if (res[j] == '.') {
                    mat[i][j] = '.';
                }
                else if (res[j] != ',' && res[j] != '\n') {
                    mx_printerr("map error\n");
                    exit(0);
                }
            }
            else {
                if (res[j + i * (s + 1)] == '#') {
                    mat[i][j] = '#';
                }
                else if (res[j + i * (s + 1)] == '.') {
                    mat[i][j] = '.';
                }
                else if (res[j + i * (s + 1)] != ',' && res[j + i * (s + 1)] != '\n') {
                    mx_printerr("map error\n");
                    exit(0);
                }
            }
        }
    }
    *stovb = s;
    *ryad = r;
    return mat;
}
