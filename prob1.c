#include <stdio.h>
int main(void){
    // Let's challenge in my favorite language!!
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            putchar(str[i]);
        }
    }
    return 0;
}
