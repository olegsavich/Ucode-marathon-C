#include <unistd.h>
#include <fcntl.h>

int mx_filelen(int);
int mx_strlen(const char *);
void mx_printerr(const char *);
void mx_printstr(const char *);

int mx_strlen(const char *s) {
    int counter = 0;

    while (*s++)
        counter++;

    return counter;
}
void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}
void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}
int mx_filelen(int file) {
    int len = 0;

    char c;
    while (read(file, &c, 1) != 0)
        len++;

    return len;
}
int main(int argc, char *argv[]) {
    if (argc == 2) {
        int file = open(argv[1], O_RDONLY);

        if (file < 0) {
            mx_printerr("error\n");
            close(file);
            return 0;
        }

        int len = mx_filelen(file);

        close(file);

        file = open(argv[1], O_RDONLY);

        char text[len];
        read(file, text, len);
        text[len] = '\0';
        mx_printstr(text);
        
        close(file);
    }
    else {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [file_path]\n");
        return 0;
    }

}
