#include "main.h"
#include <limits.h>
#include <string.h>

int print_d(va_list args)
 {
    int num = va_arg(args, int);
    char buffer[20];
    int i = 0;
    int is_negative = 0;
    int j;
    if (num == INT_MIN) {
        char min[] = "-2147483648";
        int len = strlen(min);
        fwrite(min, sizeof(char), len, stdout);
        return len;
    }

    if (num < 0) {
        is_negative = 1;
        num = -num;
    }

    do {
        int digit = num % 10;
        buffer[i++] = digit + '0';
        num /= 10;
    } while (num != 0);

    if (is_negative) {
        buffer[i++] = '-';
    }

    for (j = 0; j < i / 2; j++) {
        char temp = buffer[j];
        buffer[j] = buffer[i - j - 1];
        buffer[i - j - 1] = temp;
    }

    fwrite(buffer, sizeof(char), i, stdout);
    return i;
}

