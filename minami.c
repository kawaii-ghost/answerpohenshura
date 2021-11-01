#include <stdio.h>
// Let's challenge in my favorite language!!
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    getchar();
    
    int arr[20][20];
    for (int i = 0, n; i < b; i++) {
        for (n = 0; n < a; n++) {
            scanf("%d", &arr[n][i]);
            getchar();
            
            if (arr[n][i] == 2)
                arr[n][i] = 0;
                
        }
    }
    for (int i, n = 0, x; n < a; n++) {
        for (i = b - 2; i >= 0; i--) {
            x = i;
            
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
    for (int i = 0, n; i < b; i++) {
        for (n = 0; n < a - 1; n++) {
            printf("%d ", arr[n][i]);
        }
        printf("%d\n", arr[n][i]);
    }
    return 0;
}
