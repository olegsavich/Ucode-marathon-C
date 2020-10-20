#include "header.h"

void mx_parse(t_agent ***list_of_agents, char *text, int size) {
    for (int i = 0; i < size; i++) {
        text = mx_strstr(text, "name: ");
        text += 6;

        int len = 0;
        while (text[len] != '\n')
            len++;

        char *name = mx_strnew(len);
        mx_strncpy(name, text, len);
        (*list_of_agents)[i]->name = mx_strdup(name);

        free(name);
        name = NULL;

        text += len;
        text = mx_strstr(text, "power: ");
        text += 7;

        len = 0;
        while (text[len] != '\n')
            len++;

        char *power = mx_strnew(len);
        mx_strncpy(power, text, len);

        int p = 0;

        for (int i = 0; i < len; i++) {
            p *= 10;
            p += (int)power[i] - 48;
        }

        (*list_of_agents)[i]->power = p;
        
        free(power);
        power = NULL;

        text += len;
        text = mx_strstr(text, "strength: ");
        text += 10;

        len = 0;
        while (text[len] != '\n')
            len++;

        char *strength = mx_strnew(len);
        mx_strncpy(strength, text, len);

        int s = 0;

        for (int i = 0; i < len; i++) {
            s *= 10;
            s += (int)strength[i] - 48;
        }

        (*list_of_agents)[i]->strength = s;
        
        free(strength);
        strength = NULL;

        if (text)
            text = mx_strstr(text, "agent");
    }
}
