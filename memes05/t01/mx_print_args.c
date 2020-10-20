void mx_printstr(const char *s);
void mx_printchar(char c);
int main(int argc, char *argv[] )  {
     for (int i = 1; i  <= argc - 1; i++)
     {
        mx_printstr(argv[i]);
        mx_printchar('\n');
     }
}
