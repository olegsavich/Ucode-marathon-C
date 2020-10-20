#include <stdlib.h>
#include <stdbool.h>
char *mx_del_extra_whitespaces(const char *str);
char *mx_strtrim(const char *str);
bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_del_extra_whitespaces(const char *str){
    if(str == NULL){
        return NULL;
    }
    char *c  = mx_strtrim(str);
    for (int i = 1; i <  mx_strlen(c) - 1; i++){
        if(mx_isspace(c[i]) && mx_isspace(c[i + 1])){
            while(mx_isspace(c[i + 1])){
                char temp = c[i + 1];
                int j; 
                for (j = i; j <  mx_strlen(c) - 1; j++){
                    char tmp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = tmp;
                }
                c[j] = temp;
                c = mx_strtrim(c);
            }
        }       
        else{
            if(mx_isspace(c[i]) && c[i] != ' '){
                c[i] = ' ';
            }
        }
    }
    char *res = mx_strtrim(c);
    free(c);
    return res;
}

