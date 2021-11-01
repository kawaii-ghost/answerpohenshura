#include <stdio.h>
int main(void){
    // Let's challenge in my favorite language!!
    char str[101];
    /* 
     * The maximal input is 100 character 
     * + 1 for null character '\0'
     */

    fgets(str, sizeof(str), stdin);
    
    
    /* Loop until find '\0' */
    
    for (int i = 0; str[i] != '\0'; i += 2){
        putchar(str[i]);
        /*  
         * Instead checking odd or even, 
         * let's add the i var two times.
         */
        
        if (str[i + 1] == '\0')
            break;
        /* Case strlen(str) isn't odd */
    }
    
    putchar('\n'); 
    /* Newline */
    return 0;
}
