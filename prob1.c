#include <stdio.h>
/* Maximal character input is 100 char */
#define MAX 100
int main(void){
    /* Let's challenge in my favorite language!! */
    int i;
    /* One more bytes for NULL character */
    char str[MAX + 1];

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i += 2){
        putchar(str[i]);
        /* In case strlen(str) isn't odd */
	if (str[i + 1] == '\0')
	    break;
    }

    putchar('\n');

    return 0;
}
