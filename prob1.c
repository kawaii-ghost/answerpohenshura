#include <stdio.h>
int main(void){
    // Let's challenge in my favorite language!!
    char str[1000];
    fgets(str, sizeof(str), stdin);
    //Didn't need to check if odd anymore if you add it two times (i += 2) :O
    for (int i = 0; str[i] != '\0'; i += 2){ // Loop until find '\0'
        putchar(str[i]);
        if (str[i + 1] == '\0'){ // Case strlen(str) isn't odd
            break;
        }
    }
    puts("");
    return 0;
}
