void mx_printchar(char c);

void mx_printint(int n) {
	char buffer[12];
	int i = 0;
	if (n == 0) {
		mx_printchar('0');
	} else if (n < 0) {
		if (n == -2147483648) {
			mx_printint(-214748364);
			mx_printint(8);
		} else {
			mx_printchar('-');
			mx_printint(-n);
		}
	} else {
		while (n != 0) {
			buffer[i++] = '0' + n % 10;
			n /= 10;
		}
		for (int j = i - 1; j >= 0; j--) {
			mx_printchar(buffer[j]);
		}
	}
}
