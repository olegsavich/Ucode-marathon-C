char *mx_strchr(const char *s, int c) {
  if (c > 127 || c < 0)
    return 0;
  char cc = (char)c;
  for (int i = 0; s[i]; ++i) {
    if (s[i] == cc) {
        return (char *)(s + i);
    }
  }
  return 0;
}
