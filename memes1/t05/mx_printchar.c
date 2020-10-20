#include <unistd.h>
#include <string.h>
void mx_printchar(char c)
{
  write(1, &c, 1);
}
