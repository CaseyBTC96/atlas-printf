#include "main.h"
#include <limits.h>
#include <string.h>

int print_d(va_list args)
 {
    int num = va_arg(args, int);
    char buffer[20];
    int i = 0;
    int is_negative = 0;
    int k;

    if (num == INT_MIN) {
        // Handling for INT_MIN
        char min[] = "-2147483648";
        int len = 11; // Length of INT_MIN string
        fwrite(min, sizeof(char), len, stdout);
        return len;
    } else {
        if (num < 0) {
            is_negative = 1;
            num = -num;
        }

        // Convert the number to string
        do {
            int digit = num % 10;
            buffer[i++] = digit + '0';
            num /= 10;
        } while (num != 0);

        // Add '-' sign if the number was negative
        if (is_negative) {
            buffer[i++] = '-';
        }

        // Reverse the string
        for (k = 0; k < i / 2; k++) {
            char temp = buffer[k];
            buffer[k] = buffer[i - k - 1];
            buffer[i - k - 1] = temp;
        }

        // Write the string to stdout
        fwrite(buffer, sizeof(char), i, stdout);
        return i;
    }
}