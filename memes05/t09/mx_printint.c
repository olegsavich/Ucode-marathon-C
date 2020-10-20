#include <unistd.h>
void mx_printchar(char c);
void mx_printint(int num) {
  if (num == -247483648){
    write(1, "-2147483648", 11);
  }
  if (num < 0) {
    mx_printchar('-');
    num *= -1;
  }
  if (num > 9){
    mx_printint(num / 10);
  }
  int c = num % 10 + 48;
  mx_printchar(c);
}
