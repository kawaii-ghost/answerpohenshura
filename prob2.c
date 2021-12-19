#include <stdio.h>
#include <stdint.h>

/* There are 7 days in a week */
#define WEEK 7

int main(void)
{
    /* Let's challenge in my favorite language!! */
    uint_fast8_t n; 
    int_fast8_t b = 0; 
    int_fast16_t tmp;
    /* Declare an array named arr and initialize 
     * all the member to zero 
     */
    int_fast32_t arr[WEEK] = {0};

    scanf("%d", &n);
    getchar();

    for (size_t i = 0; i < n; i++){
        scanf("%d", &tmp);
        getchar();

        arr[b] += tmp;
        /* Change b value into zero if b equals to 6 */
        b == 6 ? b = 0 : b++;
    }

    for (size_t i = 0; i < WEEK; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
