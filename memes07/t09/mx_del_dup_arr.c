#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
  if (src == NULL)
    return NULL;
  int *arr = mx_copy_int_arr(src, *dst_size);
  int t = 0;
  int k = -1;
  //arr[0] = src[0];
  for (int i = 0; i < src_size; i++) {
    k = 0;
    for (int j = i; j < src_size; j++) {
      if (src[i] == src[j] && i != j) {
        k = 0;
      }
      else {
        for (int p = 0; p < t; p++) {
          if (src[i] == arr[p]) {
            k = 1;
          }
        }
        if (k != 1) {
          arr[t] = src[i];
          t++;
          k = 0;
          break;
        }

      }
    }
  }
  return arr;
}
