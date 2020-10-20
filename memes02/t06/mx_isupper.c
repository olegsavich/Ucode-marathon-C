#include <stdbool.h>

bool mx_islower(int c){
  if (c >= 'A' && c <= 'Z'){
    return true;  
  }
  else{
    return false;
  }
}

