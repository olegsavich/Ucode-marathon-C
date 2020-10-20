#include "header.h"

int mx_count_agents(char *cpy) {
    int number_of_agents = 0;

    while (cpy) {
        char *test = mx_strnew(5);
        mx_strncpy(test, cpy, 5);
        if (mx_strcmp(test, "agent") == 0)
            number_of_agents++;
        
        free(test);
        test = NULL;
        
        cpy += 5;
        cpy = mx_strstr(cpy, "agent");
    }
    
    return number_of_agents;
}
