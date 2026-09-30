
#include <stdio.h>
#include <string.h>

int main(void) {
    int hh, mm, ss;
    char ampm[3];

    scanf("%2d:%2d:%2d%2s", &hh, &mm, &ss, ampm);

    if (strcmp(ampm, "AM") == 0) {
        if (hh == 12) hh = 0;
    } else if (strcmp(ampm, "PM") == 0) {
        if (hh != 12) hh += 12;
    }

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
