#include "header.h"

int main(int argc, char *argv[]) {
    if (argc == 3) {
        int src = open(argv[1], O_RDONLY);

        if (src < 0) {
            mx_printerr("mx_cp: ");
            mx_printerr(argv[1]);
            mx_printerr(": No such file or directory\n");
            close(src);
            exit(0);
        }

        int len = mx_filelen(src);

        close(src);

        src = open(argv[1], O_RDONLY);

        char text[len];
        read(src, text, len);
        text[len] = '\0';

        close(src);

        int dst = open(argv[2], O_RDONLY);

        if (dst < 0) {
            close(dst);

            dst = open(argv[2], O_CREAT | O_WRONLY);

            write(dst, text, len);
        }

        close(dst);
    }
    else {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [source_file] [destination_file]\n");
    }
    return 0;
}
