#include "header.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 3) {
        if (mx_check_flag(argv[1])) {
            char *filename = argv[2];
            int file = open(filename, O_RDONLY);

            if (file < 0) {
                mx_printerr("parse_agents: ");
                mx_printerr(filename);
                mx_printerr(": open: No such file or directory\n");
                close(file);
                exit(0);
            }

            char *text = mx_file_to_str(filename);
            char *cpy = mx_strdup(text);
            int number_of_agents = mx_count_agents(cpy);

            t_agent **list_of_agents = malloc(number_of_agents * 16);

            for (int i = 0; i < number_of_agents; i++)
                list_of_agents[i] = malloc(16);

            mx_parse(&list_of_agents, text, number_of_agents);
            mx_sort(&list_of_agents, number_of_agents, argv[1][1]);
            mx_printanswer(list_of_agents, number_of_agents);

            close(file);

            for (int i = 0; i < number_of_agents; i++) {
                free(list_of_agents[i]->name);
                list_of_agents[i]->name = NULL;

                free(list_of_agents[i]);
                list_of_agents[i] = NULL;
            }
  
            free(list_of_agents);
            list_of_agents = NULL;
            free(cpy);
            cpy = NULL;
            free(text);
            text = NULL;
        }
        else {
            mx_printerr("usage: ");
            mx_printerr(argv[0]);
            mx_printerr(" [-p | -s | -n] [file_name]\n");
        }
    }
    else {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [-p | -s | -n] [file_name]\n");
    }

    return 0;
}
