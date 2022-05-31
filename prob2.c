#include <stdio.h>
#include <inttypes.h>

#define WEEK 7

int main(void)
{
    /* Let's challenge in my favorite language!! */
    uint_fast8_t n;
    int_fast8_t b = 0;
    
    int_fast32_t arr[WEEK] = {0};

    scanf("%" SCNuFAST8, &n);
    getchar();

    for (size_t i = 0; i < n; i++) {
        int_fast16_t tmp;
        scanf("%" SCNdFAST16, &tmp);
        getchar();

        arr[b] += tmp;
     
        b == 6 ? b = 0 : b++;
    }

    for (size_t i = 0; i < WEEK; i++) {
        printf("%" PRIdFAST32 "\n", arr[i]);
    }

    return 0;
}
