#include "header.h"

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
