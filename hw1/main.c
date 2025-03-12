/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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