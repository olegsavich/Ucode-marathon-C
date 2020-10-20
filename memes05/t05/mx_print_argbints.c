int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int num);

int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    int n = mx_atoi(argv[i]);
    int k;
    for (int c = 31; c >= 0; c--) {
      k = n >> c;
      if ( k & 1) {
        mx_printint(1);
      }
      else {
        mx_printint(0);
      }
    }
    mx_printchar('\n');
  }
}
