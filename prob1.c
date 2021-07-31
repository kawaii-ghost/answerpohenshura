#include <stdio.h>
#include <string.h>

int main(void){
    // Let's challenge in my favorite language!!
    char str[1000];
    char answer[500]; //I only do VLA if i'm lazy to think
    fgets(str, sizeof(str), stdin); //Doing input and assign it to str array
    int a = 0;
    int i = 0;
    while (i <= strlen(str)) { //Loop until find '\0'
        if (i % 2 == 0) {
            answer[a] = str[i]; //Only assign if array index is even
            a++;
        }
        i++;
    }
    puts(answer); //Output the answer 
    return 0;
}
