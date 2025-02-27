#include <stdio.h>

int main() {
    char a[] = "Hello";  
    int len = 0;        

    while (a[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }

    printf("%s\n", a); 
    return 0;
}
