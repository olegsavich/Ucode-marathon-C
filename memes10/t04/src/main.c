#include "header.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        char buf[1];
        int words = 0;
        int lines = 0;
        int bites = 0;
        int status = read(0, buf, 1);
        char last = '\0';
        int is_space_was = 0;

        if (mx_isspace(buf[0])) {
            is_space_was++;
            if (!mx_isspace(last)) {
                words++;
            }
        }

        if (buf[0] == '\n')
            lines++;

        bites++;

        last = buf[0];

        while (status != 0) {
            status = read(0, buf, 1);

            if (mx_isspace(buf[0])) {
                is_space_was++;
                if (!mx_isspace(last))
                    words++;
            }
            last = buf[0];

            if (buf[0] == '\n')
                lines++;

            bites++;
        }

        if (lines != 0)
            lines--;
        bites--;

        if (is_space_was == 0)
            words = 1;

        mx_printchar('\t');
        mx_printint(lines);
        mx_printchar('\t');
        mx_printint(words);
        mx_printchar('\t');
        mx_printint(bites);
        mx_printchar('\n');

        return 0;
    }

    int total_lines = 0;
    int total_words = 0;
    int total_bites = 0; 

    for (int i = 1; i < argc; i++) {
        if (mx_strcmp(argv[i], ".") == 0) {
            mx_printerr("mx_wc: .: read: Is a directory\n");
            continue;
        }

        char *filename = argv[i];
        int file = open(filename, O_RDONLY);

        if (file < 0) {
            mx_printerr("mx_wc: ");
            mx_printerr(filename);
            mx_printerr(": open: No such file or directory\n");
            close(file);
            exit(0);
        }

        char *text = mx_file_to_str(filename);

        close(file);

        int words = mx_count_words(text);
        int lines = mx_count_lines(text);
        int bites = mx_strlen(text);

        mx_printchar('\t');
        mx_printint(lines);
        mx_printchar('\t');
        mx_printint(words);
        mx_printchar('\t');
        mx_printint(bites);
        mx_printchar('\t');
        mx_printstr(filename);
        mx_printchar('\n');

        total_lines += lines;
        total_words += words;
        total_bites += bites;

        free(text);
        text = NULL;
    }

    if (argc > 2) {
        mx_printchar('\t');
        mx_printint(total_lines);
        mx_printchar('\t');
        mx_printint(total_words);
        mx_printchar('\t');
        mx_printint(total_bites);
        mx_printchar('\t');
        mx_printstr("total");
        mx_printchar('\n');
    }

    return 0;
}
