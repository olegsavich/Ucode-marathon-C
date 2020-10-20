#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>

typedef struct s_agent {
    char *name;
    int power;
    int strength;
} t_agent;


bool mx_isspace(char);
int mx_filelen(int);
int mx_strlen(const char *);
void mx_printchar(char); 
void mx_printint(int);
void mx_printerr(const char *);
void mx_printstr(const char *);
char *mx_strcpy(char *, const char *);
char *mx_strdup(const char *);
char *mx_strnew(const int);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_count_agents(char *cpy);
int mx_strcmp(const char *, const char *);
char *mx_file_to_str(const char *);
bool mx_check_flag(char *);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *haystack, const char *needle);
void mx_parse(t_agent ***list_of_agents, char *, int size);
void mx_printanswer(t_agent **list_of_agents, int size);
void mx_sort(t_agent ***arr, int size, char factor);

#endif
