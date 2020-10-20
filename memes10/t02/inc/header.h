#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int mx_filelen(int);
int mx_strlen(const char *);
void mx_printerr(const char *);
void mx_printstr(const char *);

#endif
