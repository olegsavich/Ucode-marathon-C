#include "get_address.h"

char *mx_get_address(void *p) {
  unsigned long adrs_int = (unsigned long)p;
  char *adrs_str = mx_strnew(mx_strlen(mx_nbr_to_hex(adrs_int)));
  adrs_str = mx_strcpy(adrs_str,mx_nbr_to_hex(adrs_int));
  return adrs_str;
}

