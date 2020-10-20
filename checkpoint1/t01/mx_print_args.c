#include <unistd.h>
int main(int argc, char *argv[]) {
	if (argc == 1)
		return 0;
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++)
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
	return 0;
}
