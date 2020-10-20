void mx_str_reverse(char *s);

void mx_str_reverse(char *s) {
   int j = 0;
   char c = s[j];
   while(c != 0){
       j++;
       c = s[j];
   }
   int a = j;
   for (int i = 0; i < a / 2; i++){
    char  tmp = s[i];
    s[i] = s[a - 1 - i];
    s[a - 1 - i] = tmp; 
   }
}

