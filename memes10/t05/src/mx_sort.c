#include "header.h"

void mx_sort(t_agent ***arr, int size, char factor) {
    int situation = -1;

    switch (factor) {
        case 'n': situation = 0; break;
        case 'p': situation =  1; break;
        case 's': situation = 2; break;
    }

    for (int i = 0; i < size; i++) {  
        int min_idx = i;  

        for (int j = i; j < size - 1; j++) {
            switch (situation) {
                case 0: {
                    if (mx_strcmp((*arr)[min_idx]->name, (*arr)[j + 1]->name) > 0)
                        min_idx = j + 1;
                }; break;
                case 1: {
                    if ((*arr)[min_idx]->power > (*arr)[j + 1]->power)
                        min_idx = j + 1; 
                }; break;
                case 2: {
                    if ((*arr)[min_idx]->strength > (*arr)[j + 1]->strength)
                        min_idx = j + 1; 
                }; break;
            }
        }
        
        if (min_idx != i) {
            t_agent *temp = (*arr)[min_idx];
            (*arr)[min_idx] = (*arr)[i];
            (*arr)[i] = temp;
        }
    }
}
