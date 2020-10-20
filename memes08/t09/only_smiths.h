#ifndef ONLY_SMITHS_H
#define ONLY_SMITHS_H
#include <stdlib.h>

#include "agent.h"

typedef struct s_agent t_agent;

t_agent **mx_only_smiths(t_agent**, int);
void mx_exterminate_agents(t_agent***);
t_agent *mx_create_agent(char*, int, int);
char *mx_strcpy(char*, const char*);
char *mx_strnew(const int);
int mx_strlen(const char*);
char *mx_strdup(const char*);
int mx_strcmp(const char*, const char*);

#endif
