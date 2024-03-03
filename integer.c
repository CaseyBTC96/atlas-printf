#include "main.h"

int print_d(va_list args)
{
    int num = va_arg(args, int);
    char buffer[20];
    int i = 0;

    while (num != 0) {
        int digit = num % 10;
        buffer[i++] = digit + '0';
        num /= 10;
    }
    if (i == 0) {
        buffer[i++] = '0';
    }

    for (int j = 0; j < i / 2; j++)
    {
        char temp = buffer[j];
        buffer[j] = buffer[i - j - 1];
        buffer[i - j - 1] = temp;
    }


    fwrite(buffer, sizeof(char), i, stdout);
    return i; 
}

int print_i(va_list args)
{
    int num = va_arg(args, int);
    char buffer[20];
    int i = 0;

    while (num != 0) {
        int digit = num % 10;
        buffer[i++] = digit + '0';
        num /= 10;
    }
    if (i == 0) {
        buffer[i++] = '0';
    }

    for (int j = 0; j < i / 2; j++)
    {
        char temp = buffer[j];
        buffer[j] = buffer[i - j - 1];
        buffer[i - j - 1] = temp;
    }


    fwrite(buffer, sizeof(char), i, stdout);
    return i; 
}