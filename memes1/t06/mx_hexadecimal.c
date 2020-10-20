#include <unistd.h>

void mx_hexadecimal(void);

void mx_printchar(char c);

void mx_hexadecimal(void)
{
  char c;
  for(int i = 0; i < 16; i++){
    if(i < 10){
      c = i + 48;
    }
    else{
      c = i + 55;
    }
    mx_printchar(c);
  }
  write(1, "\n", 1);
}
