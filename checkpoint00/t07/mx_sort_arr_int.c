void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void mx_sort_arr_int(int *arr, int size);
void mx_sort_arr_int(int *arr, int size) 
{ 
  int i, j, min_idx; 
  for (i = 0; i < size - 1; i++) { 
    min_idx = i; 
    for (j = i + 1; j < size; j++){
    if (arr[j] < arr[min_idx]){
    min_idx = j;
    }
    }
    swap(&arr[min_idx], &arr[i]); 
  } 
}

