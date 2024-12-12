#include <unistd.h>

void rev_wstr(char *str) {
	int start;
	int end;
	int i = 0;

	while (str[i] != '\0')
		i++;
	while (i >= 0) {
		while (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
			i--;
		end = i;
		while (i >= 0 && str[i] != ' ' && str[i] != '\t')
			i--;
		start = i + 1;
		int flag = start;
		while (start <= end) {
			write(1, &str[start], 1);
			start++;
		}
		if (flag != 0)
			write(1, " ", 1);
	}
}


int main(int argc, char **argv) {
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
