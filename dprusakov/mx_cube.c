void mx_printchar(char c);

void mx_cube(int n) {
    if (n < 2) {
        return;
    }

    for (int k = 0; k < 1 + n / 2; k++) {
        mx_printchar(' ');
    }
    mx_printchar('+');
    for (int k = 0; k < n * 2; k++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');

    for (int k = 0; k < n / 2; k++) {
        for (int b = 0; b < n / 2 - k; b++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int b = 0; b < n * 2; b++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int b = 0; b < k; b++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }
    mx_printchar('+');
    for (int k = 0; k < n * 2; k++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    for (int k = 0; k < n / 2; k++) {
        mx_printchar(' ');
    }
    mx_printchar('|');
    mx_printchar('\n');


    for (int k = 0; k < n - n / 2; k++) {
        mx_printchar('|');
        for (int b = 0; b < n * 2; b++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int b = 0; b < n / 2; b++) {
            mx_printchar(' ');
        }
        if (k == n - n / 2 - 1) {
            mx_printchar('+');
        }
        else {
            mx_printchar('|');
        }
        mx_printchar('\n');
    }


    for (int k = 0; k < n / 2; k++) {
        mx_printchar('|');
        for (int b = 0; b < n * 2; b++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int b = 0; b < n / 2 - 1 - k; b++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        mx_printchar('\n');
    }


    mx_printchar('+');
    for (int b = 0; b < n * 2; b++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');

}
























