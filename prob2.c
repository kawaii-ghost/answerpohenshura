#include <stdio.h>

#define WEEK 7

int main(void) {
    int i, n, b = 0, tmp;
    int arr[WEEK] = {0};

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++){
        scanf("%d", &tmp);
        getchar();

        arr[b] += tmp;

        b == 6 ? b = 0 : b++;
    }

    for (i = 0; i < WEEK; ++i) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
