#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void);
void mx_write_knock_knock(void)
{
  write(1, "Follow the white rabbit.\n", strlen("Follow the white rabbit.\n"));
  write(1, "Knock, Knock, Neo.\n", strlen("Knock, Knock, Neo.\n"));
}

int main()
{
  mx_write_knock_knock();
}
