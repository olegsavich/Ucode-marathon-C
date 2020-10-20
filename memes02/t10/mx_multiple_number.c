#include <stdbool.h>

bool mx_multiple_number(int n, int mult){
  if(mult % n == 0){
  return  true;
  }
  else{
  return false;
  }
}
