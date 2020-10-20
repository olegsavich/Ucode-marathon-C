char *mx_strchr(const char *s, int c);
void mx_printchar(char c);
void mx_printstr(const char *s);
int main(int argc, char *argv[]) {
  char *str = mx_strchr(argv[argc - 1], '/');
  mx_printstr(++str);
  mx_printchar('\n');
}
