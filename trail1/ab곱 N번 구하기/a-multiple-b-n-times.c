#include <stdio.h>

int main() {
    int N;// Please write your code here.
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        int a,b;
        scanf("%d %d", &a, &b);
        int sum_val=1;
        for(int j=a; j<=b; j++){
            sum_val *= j;
        }
        printf("%d", sum_val);
        printf("\n");
    }
    return 0;
}