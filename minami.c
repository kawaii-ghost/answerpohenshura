#include <stdio.h>
/* Maximum array input is 20 x 20 */
#define MAX 20

int main(void)
{
    /* Let's challenge in my favorite language!! */
    int_fast8_t a, b;

    int *up, *down;
    int_fast8_t arr[MAX][MAX];

    scanf("%" SCNdFAST8 " %" SCNdFAST8, &a, &b);
    getchar();


    for (size_t i = 0; i < b; i++) {
        for (size_t n = 0; n < a; n++) {
            scanf("%" SCNdFAST8, &arr[n][i]);
            getchar();

            if (arr[n][i] == 2)
                arr[n][i] = 0;
        }
    }
	
	
    b -= 1;
    for (size_t n = 0; n < a; n++) {
        for (size_t i = b - 2; i >= 0; i--) {
            do {
	        up = &arr[n][i];
            	down = &arr[n][i + 1];

                if (*up && !*down) {
                    *up = 0;
                    *down = 1;
                } else {
                    break;
                }

                i++;
            } while (i < b);
        }
    }
    b += 1;

	
    a -= 1;
    for (i = 0; i < b; i++) {
        for (n = 0; n < a; n++) {
            printf("%d ", arr[n][i]);
        }
        printf("%d\n", arr[n][i]);
    }

    return 0;
}
