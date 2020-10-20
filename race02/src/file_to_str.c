#include "../inc/header.h"

char *mx_file_to_str(const char *filename) {
     int file = open(filename,O_RDONLY);
     char s[1];
     int n = read(file , s, sizeof(s));
     int count = 0;

     while(n > 0) {
         if (s[0] == '#' || s[0] == '.' || s[0] == '\n' ){
             ++count;
         }
         n = read (file, s, sizeof(s));
     }
     close(file);
     file = open(filename,O_RDONLY);
     char *res = (char *)malloc(sizeof(char) * count + 1);

     n = read(file, s, 1);

     for(int i = 0; i < count && n > 0; ++i) {
         if (s[0] == '.' || s[0] == '#' || s[0] == '\n') {
            res[i] = s[0];
            ++i;
          }
          n = read(file, s, 1);
          --i;
     }
    res[count] = '\0';
    close(file);
    return res;
}
