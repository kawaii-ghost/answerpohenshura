#include <stdio.h>
int main(void){
    // Let's challenge in my favorite language!!
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[1000][1000];
    for (int y = 1; y <= b; y++){
        for(int x = 1; x <= a; x++){
            scanf("%d", &arr[x][y]);
        }
    }
    int out = 0;
    for (int i = 0, q, w, e, r; i < c; i++){
        scanf("%d %d %d %d", &q, &w, &e, &r);
        do {
            int t = q;
            do {
                out += arr[t][w];
                arr[t][w] = 0;
                t++;
            } while (t <= e);
            w++;
        } while (w <= r);
    }
    printf("%d\n", out);
    return 0;
}
