#include <unistd.h>

void mx_only_printable(void);
void mx_printchar(char c);
void mx_only_printable(void)
{
  for(int i = 127; i >= 32; i--){
    mx_printchar(i);
  }
  write(1, "\n", 1);
}
