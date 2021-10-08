#include <stdio.h>
int main(void){
    // Let's challenge in my favorite language!!
    int a;
    scanf("%d", &a); // Define how many input (Can be divided by 7)
    int out[7] = {0}; 
    // There are seven days in a week 
    // and initializing all of them to zero.

    for (int i = 0, b = 0, c; i < a; i++) {
        scanf("%d", &c);
        out[b] += c;
        b == 6 ? b = 0 : b++;
    }
    for (int i = 0; i < 7; i++) { 
        printf("%d\n", out[i]);
    }
    return 0;
}
