#include <unistd.h>

void mx_printchar(char c) {
	char *v = &c;
	write(1, v, 1);
}














