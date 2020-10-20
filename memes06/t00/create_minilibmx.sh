clang -c mx_printchar.c mx_printint.c mx_printstr.c mx_strcpy.c mx_strlen.c mx_strcmp.c mx_isdigit.c mx_isspace.c mx_atoi.c
ar -rc minilibmx.a mx_printchar.o mx_printint.o mx_printstr.o mx_strcpy.o mx_strlen.o mx_strcmp.o mx_isdigit.o mx_isspace.o mx_atoi.o
ranlib minilibmx.a

