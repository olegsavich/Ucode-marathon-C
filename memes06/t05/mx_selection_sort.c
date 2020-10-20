#include <stdio.h>

int mx_strcmp (const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {
    int position, count = 0;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == NULL) return 0;
        position = i;

        for (int j = i + 1; j < size; j++) {
            if (mx_strlen(arr[position]) > mx_strlen(arr[j]))
                position = j;
            else if (mx_strlen(arr[position]) == mx_strlen(arr[j]) && mx_strcmp(arr[position], arr[j]) > 0)
                position = j;
        }
        if (position != i) {
            count++;
            char *temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
        }
    }
    return count;   
}


