void mx_printchar(char c);

void mx_pyramid(int n) {
    if (n <= 1 || n % 2 != 0) {
        return;
    }

    for (int k = 0; k < n; k++) {
        if (k == 0) {
            for (int b = 0; b < n - 1; b++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            mx_printchar('\\');
        } else if (k < n / 2) {
            for (int b = 0; b < n - k - 1; b++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int b = 0; b < k * 2 - 1; b++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
            for (int b = 0; b < k; b++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
        } else if (k < n - 1) {
            for (int b = 0; b < n - k - 1; b++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int b = 0; b < k * 2 - 1; b++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
            for (int b = 0; b < n - k - 1; b++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
        } else {
            mx_printchar('/');
            for (int b = 0; b < k * 2 - 1; b++) {
                mx_printchar('_');
            }
            mx_printchar('\\');
            mx_printchar('|');
        }
        mx_printchar('\n');
    }
}














