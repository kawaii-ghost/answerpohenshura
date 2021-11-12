#include <stdio.h>
/* There are 7 days in a week */
#define WEEK 7
int main(void) {
    /* Let's challenge in my favorite language!! */
    int i, n, b = 0, tmp;
    int arr[WEEK] = {0};

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++){
        scanf("%d", &tmp);
        getchar();

        arr[b] += tmp;
        /* Change b value into zero if b equals to 6 */
        b == 6 ? b = 0 : b++;
    }

    for (i = 0; i < WEEK; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
