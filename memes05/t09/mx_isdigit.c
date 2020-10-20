#include <stdbool.h>
bool mx_isdigit(int c);

bool mx_isdigit(int c){
  bool is_digit;
  if(c > 47 && c < 58){
    is_digit = true;
  }
  else{
    is_digit = false;
  }
  return is_digit;
}
