#include <stdio.h>
int mx_strncmp(const char* s1, const char* s2, int n)
{
  if (n == 0)
    return 0;
  do {
    if (*s1 != *s2++)
      return (*(const unsigned char *)s1 -
        *(const unsigned char *)(s2 - 1));
    if (*s1++ == 0)
      break;
  } while (--n != 0);
  return 0;
}

int main(){
    printf("%d", mx_strncmp("Bruh", "Lol kek", 3));
}
