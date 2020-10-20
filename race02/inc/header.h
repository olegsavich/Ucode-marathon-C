#ifndef HEADER_H
#define HEADER_H


#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>


int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printint(int n);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
void mx_printerr(const char *s);
int mx_atoi(const char *str);
char **cmatrix (char *res, int *ryad, int *stovb);
int **matrix (char *res, int *ryad, int *stovb);
char *mx_file_to_str(const char *filename);
int max(int **grid,int ax, int ay,int He, int Wi, char **final);
bool lee(int **grid,int ax, int ay, int bx, int by,int He, int Wi, int *len,int *px,int *py);




#endif
