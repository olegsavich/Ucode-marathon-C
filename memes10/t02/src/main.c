#include "header.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        char buf[1];
        int status = read(0, buf, 1);

        write(1, buf, 1);

        while (status != 0) {
            status = read(0, buf, 1);

            write(1, buf, 1);
        }

        return 0;
    }

    for (int i = 1; i < argc; i++) {
        char *to_cat = argv[i];
        int file = open(to_cat, O_RDONLY);

        if (file < 0) {
            mx_printerr("mx_cat: ");
            mx_printerr(to_cat);
            mx_printerr(": No such file or directory\n");
            close(file);
            exit(0);
        }

        int len = mx_filelen(file);

        close(file);

        file = open(to_cat, O_RDONLY);

        char text[len];
        read(file, text, len);
        text[len] = '\0';

        close(file);

        write(1, text, len);
    }

    return 0;
}
