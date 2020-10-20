#include <stdio.h>

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int i, j, count = 0;  
    char *key;
    for (i = 1; i < size; i++) { 
        if (arr[0] == NULL || arr[i] == NULL) return 0;
        key = arr[i];  
        j = i - 1;  
  

        while (j >= 0 && mx_strlen(arr[j]) > mx_strlen(key)) { 
            count++;
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
            arr[j + 1] = key;  
    }
    return count;
}


