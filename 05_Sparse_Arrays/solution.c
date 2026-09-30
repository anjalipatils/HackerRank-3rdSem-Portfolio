#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char stringList[n][101];
    for (int i = 0; i < n; i++) {
        scanf("%s", stringList[i]);
    }

    int q;
    if (scanf("%d", &q) != 1) return 0;

    char query[101];
    for (int i = 0; i < q; i++) {
        scanf("%s", query);
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(query, stringList[j]) == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
