#include <stdio.h>
#define MAX 100

int main(void)
{
    /* Let's challenge in my favorite language!! */
    setvbuf(stdout, NULL, _IOFBF, 0);
    /* One more bytes for NULL character */
    char str[MAX + 1] = {'\0'};

    scanf("%100[^\n]", str);
    getchar();

    for (char *ch = str; *ch != '\0'; ch++){
        putchar(*ch);
    }

    putchar('\n');
}
