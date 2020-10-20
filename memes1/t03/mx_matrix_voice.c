#include <unistd.h>

void mx_matrix_voice(void);
void mx_matrix_voice(void)
{
  write(1, "\a\n", 1);
} 

int main()
{
  mx_matrix_voice();
}
