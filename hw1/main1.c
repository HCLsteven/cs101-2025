#include <stdio.h>
#include <string.h>

void arrayLen(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char now = str[i];
        int count = 1;
        while (i + 1 < len && str[i + 1] == now) {
            count++;
            i++;
        }
        printf("%c%d", now, count);
    }
    printf("\n");
}

int main() {
    char a[100];
    scanf("%s", a);
    arrayLen(a);
    char b[100];
    scanf("%s", b);
    arrayLen(b);
    return 0;
}
