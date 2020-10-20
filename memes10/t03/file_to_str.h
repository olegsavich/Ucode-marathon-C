#ifndef FILE_TO_STR_H
#define FILE_TO_STR_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int mx_strlen(const char *);
char *mx_strcpy(char *, const char *);
char *mx_strnew(const int);
char *mx_strdup(const char *);
char *mx_file_to_str(const char *);
char *mx_strcat(char * restrict, const char * restrict);
char *mx_strjoin(const char *, const char *);

#endif
