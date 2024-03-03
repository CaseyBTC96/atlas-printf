#include "main.h"
#include <limits.h>
#include <string.h>

int print_d(va_list args)
{
    int count = 0;
    int calc, hold, track_dig;
    int value = va_arg(args, int);

    if (value == INT_MIN) {
        putchar('-');
        count++;
        calc = INT_MAX;
    } else if (value < 0) {
        putchar('-');
        count++;
        calc = abs(value);
    } else {
        calc = value;
    }

    hold = calc;
    track_dig = 1;

    while (hold >= 10) {
        hold = hold / 10;
        track_dig = track_dig * 10;
    }

    while (track_dig >= 1) {
        if (value == INT_MIN && track_dig == 1) {
            putchar('8');
            count++;
            track_dig = track_dig / 10;
        } else {
            count++;
            putchar((calc / track_dig) % 10 + '0');
            track_dig = track_dig / 10;
        }
    }

    return count;
}