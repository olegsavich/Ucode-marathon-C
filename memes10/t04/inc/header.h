#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>

bool mx_isspace(char);
int mx_filelen(int);
int mx_strlen(const char *);
void mx_printchar(char); 
void mx_printint(int);
void mx_printerr(const char *);
void mx_printstr(const char *);
char *mx_strnew(const int);
int mx_strcmp(const char *, const char *);
int mx_count_words(const char *);
int mx_count_lines(const char *);
char *mx_file_to_str(const char *);

#endif
