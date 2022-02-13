#include <stdio.h>
/* Maximum array input is 20 x 20 */
#define MAX 20

int main(void)
{
    /* Let's challenge in my favorite language!! */
    int a, b, i, n;
    /*
     * Actually I don't need pointer var
     * but it's used for better readability
     */
    int *up, *down;
    int arr[MAX][MAX];

    scanf("%d %d", &a, &b);
    getchar();


    for (i = 0; i < b; i++) {
        for (n = 0; n < a; n++) {
            scanf("%d", &arr[n][i]);
            getchar();

            if (arr[n][i] == 2)
                arr[n][i] = 0;
        }
    }
	
	
    b -= 1;
    for (n = 0; n < a; n++) {
        for (i = b - 2; i >= 0; i--) {
            do {
	        up = &arr[n][i];
            	down = &arr[n][i + 1];

                if (*up == 1 && *down == 0) {
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
