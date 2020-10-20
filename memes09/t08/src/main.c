#include "minilibmx.h"



int main(int argv, char* argc[]) {
        if (argv != 4) {
        write(2,"usage: ./calc [operand1] [operation] [operand2]\n", 48);
        exit(-1);
    }
    error my_error = -1;
    char *a_char = mx_strdup(argc[1]);
    char *b_char = mx_strdup(argc[3]);
    char *op = mx_strdup(argc[2]);
    if (mx_atoi(a_char) == -351351351 || mx_atoi(b_char) == -351351351)
            my_error = 0;
    else
        if (mx_strlen(op) != 1 || (op[0] != '+' && op[0] != '-' && op[0] != '*' && op[0] != '/' && op[0] != '%'))
            my_error = 1;
        else
            if (mx_atoi(b_char) == 0 && (op[0] = '/'))
                my_error = 2;
    if (my_error == 0) {
        write(2,"error: invalid number\n", 22);
        exit(-1);
    }
    if (my_error == 1) {
        write(2,"error: invalid operation\n", 25);
        exit(-1);
    }
        if (my_error == 2) {
        write(2,"error: division by zero\n", 24);
        exit(-1);
    }
    operation my_operation;
    switch (op[0]) {
    case '-':
        my_operation = 0;
        break;
    case '+':
        my_operation = 1;
        break;
    case '*':
        my_operation = 2;
        break;
    case '/':
        my_operation = 3;
        break;
    case '%':
        my_operation = 4;
        break;
    }
    t_operation result;
    result.op = op[0];
    switch (my_operation)
    {
    case 0:
        result.f = mx_sub;
        break;
    case 1:
        result.f = mx_add;
        break;
    case 2:
        result.f = mx_mul;
        break;
    case 3:
        result.f = mx_div;
        break;
    case 4:
        result.f = mx_mod;
        break;
    }
    int out_result = (int)result.f(mx_atoi(a_char), mx_atoi(b_char));
    printf("%d\n", out_result);
}


