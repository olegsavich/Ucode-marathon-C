int mx_popular_int(const int *arr, int size) 
{
  int dcount = 0;
  int max_count = 0;
  int answer = 0;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      if (arr[i] == arr[j]) {
        dcount++;
        if (dcount > max_count) {
          max_count = dcount;
          answer = arr[i];
        }
      }
    }
    dcount = 0;
  }
  return answer;
}
