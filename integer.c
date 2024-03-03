#include "main.h"
#include <limits.h>
#include <string.h>

int print_d(va_list args)
{
    if (format != NULL) {
        int count = 0;
        va_list args;
        va_start(args, format);
        int i = 0;
        int k;

        while (format[i] != '\0') {
            if (format[i] == '%' && format[i + 1] == 'd') {
                int num = va_arg(args, int);
                char buffer[20];
                int j = 0;
                int is_negative = 0;

                if (num == INT_MIN) {
                    // Handling for INT_MIN
                    char min[] = "-2147483648";
                    int len = 11; // Length of INT_MIN string
                    fwrite(min, sizeof(char), len, stdout);
                    count += len;
                } else {
                    if (num < 0) {
                        is_negative = 1;
                        num = -num;
                    }

                    // Convert the number to string
                    do {
                        int digit = num % 10;
                        buffer[j++] = digit + '0';
                        num /= 10;
                    } while (num != 0);

                    // Add '-' sign if the number was negative
                    if (is_negative) {
                        buffer[j++] = '-';
                    }

                    // Reverse the string
                    for (k = 0; k < j / 2; k++) {
                        char temp = buffer[k];
                        buffer[k] = buffer[j - k - 1];
                        buffer[j - k - 1] = temp;
                    }

                    // Write the string to stdout
                    fwrite(buffer, sizeof(char), j, stdout);
                    count += j;
                }
                
                i += 2;
            } else {
                putchar(format[i]);
                count++;
                i++;
            }
        }
        va_end(args);
        return count;
    }
    return -1;
}
