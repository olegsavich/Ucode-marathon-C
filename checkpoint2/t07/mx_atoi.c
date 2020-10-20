#include <stdbool.h>
​
bool mx_isspace(char c) {
	if (c == '\t' 
	    || c == '\n' || c == '\v'
	    || c == '\f' || c == '\r') {
		return true;
	}
	return false;
}
​
bool mx_isdigit(char c) {
	if (c >= 48 && c <= 57)
		return true;
	return false;
}
​
int mx_atoi(const char *s) {
	int res = 0;
	int sign = 1, counterSign = 0;
	bool wasNumber = false;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '-') {
			sign *= -1;
			counterSign++;
			if (counterSign >= 2 || wasNumber)
				return 0;
			continue;
		}
		if (s[i] == '+') {
			counterSign++;
			if (counterSign >= 2 || wasNumber)
				return 0;
			continue;
		}
		if (counterSign >= 2)
			return 0;
        if (s[i] == ' ')
            continue;
		if ((mx_isspace(s[i]) || !mx_isdigit(s[i]))
		    && (s[i] != '-' && s[i] != '+'))
				return 0;
		res = res * 10 + (s[i] - '0');
		wasNumber = true;
	}
	return sign * res;
}
