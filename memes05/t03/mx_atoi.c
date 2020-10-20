#include <stdbool.h>
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str) {
  int res = 0;
  int i = -1;
  int sign = 0;
  while (str[++i]) {
    if (str[i] == '-' && sign == 0) {
      sign = -1;
      i++;
    }
    else if(str[i] == '+' && sign == 0) {
      sign = 1;
      continue;
    }
    if (mx_isdigit(str[i])) {
      res = res * 10 + (str[i] - '0');
    }
    else {
      res = 0;
      break;
    }
  }
  if (sign == -1)
  {
    res *= -1;
  }
  return res;
}
