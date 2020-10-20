#include <unistd.h>
int main(int argc, char *argv[]) {
	for (int i = 0; argv[0][i] != '\0'; i++)
		write(1, &argv[0][i], 1);
	write(1, "\n", 1);
	char count = argc + 48;
	write(1, &count, 1);
	write(1, "\n", 1);
	return 0;
}
