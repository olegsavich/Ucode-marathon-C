#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char* src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);

// #INCLUDE CALCULATOR_H //////////////////////////

int mx_add(int a, int b);
int mx_sub(int a, int b);
int mx_mul(int a, int b);
int mx_div(int a, int b);
int mx_mod(int a, int b);

typedef struct s_operation
{
    char op;
    int (*f)(int a, int b);
}              t_operation;
enum e_operation {
    SUB,
    ADD,
    MUL,
    DIV,
    MOD
};
enum e_error {
    INCORRECT_OPERAND,
    INCORRECT_OPERATION,
    DIV_BY_ZERO
};
///////////////////////////////////////////////////
typedef enum e_operation operation;
typedef enum e_error error;
#endif
