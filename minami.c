#include <stdio.h>
// Let's challenge in my favorite language!!
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[20][20];
    for (int i = 0; i < b; i++) {
        for (int n = 0; n < a; n++) {
            scanf("%d", &arr[n][i]);
            if (arr[n][i] == 2) {
                arr[n][i] = 0;
            }
        }
    }
    for (int n = 0; n < a; n++) {
        for (int i = b - 2; i >= 0; i--) {
            int x = i;
            do {
                if (arr[n][x] == 1 && arr[n][x + 1] == 0) {
                    arr[n][x] = 0;
                    arr[n][x + 1] = 1;
                } else {
                    break;
                }
                x++;
            } while (x < (b - 1));
        }
    }
    for (int i = 0; i < b; i++) {
        for (int n = 0; n < a; n++) {
            if (n == a - 1){
                printf("%d\n", arr[n][i]);
            } else {
                printf("%d ", arr[n][i]);
            }
        }
    }
    return 0;
}
