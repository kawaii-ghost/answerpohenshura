#include <stdio.h>
/* Maximal character input is 100 char */
#define MAX 100

int main(void)
{
    /* Let's challenge in my favorite language!! */

    /* One more bytes for NULL character */
    char str[MAX + 1] = {'\0'};

    scanf("%100[^\n]", str);
    getchar();

    for (int i = 0; str[i] != '\0'; i += 2){
        putchar(str[i]);
    }

    putchar('\n');

    return 0;
}
