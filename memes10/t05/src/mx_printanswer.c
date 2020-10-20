#include "header.h"

void mx_printanswer(t_agent **list_of_agents, int size) {
    for (int i = 0; i < size; i++) {
        mx_printstr("agent: ");
        mx_printstr(list_of_agents[i]->name);
        mx_printstr(", power: ");
        mx_printint(list_of_agents[i]->power);
        mx_printstr(", strength: ");
        mx_printint(list_of_agents[i]->strength);
        mx_printchar('\n');
    }
}
