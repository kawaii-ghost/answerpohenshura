#include <stdio.h>
int main(void){
    // Let's challenge in my favorite language!!
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) { // Doing loop until find '\0'
        if (i % 2 == 0) { // Check if i var is even
            putchar(str[i]); // Print even index str array
        }
    }
    return 0;
}
