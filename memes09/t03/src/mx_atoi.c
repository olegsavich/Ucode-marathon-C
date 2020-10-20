#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
    int result=0, minus = 0;
    for (int z = 0; str[z]; z++) {
        for (int i = 48; i <= 57; i++) {
            if((int)str[z] == 45) {
                minus = 1;
                continue;
            }
            if(mx_isspace(str[z])) {
                continue;
            }
            if(!mx_isdigit(str[z])) {
                if(minus == 1) {
                    result *= -1;
                }
                return (result / 10);
            }
            if((int)str[z] == i) {
                result += (i - 48);
                if(str[z + 1]){
                    result = result*10;
                }
            }
        }
    }
    if(minus == 1) {
        result *= -1;
    }
    return result;
}
