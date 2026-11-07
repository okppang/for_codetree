#include <stdio.h>

int main() {
    int N;// Please write your code here.
    scanf("%d", &N);
    int arr[4];
    int cnt=0;
    for(int i=0; i<N; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            scanf("%d", &arr[j]);
            sum+=arr[j];
        }
        if((double)sum/4>=60) {
            printf("pass\n");
            cnt++;
        }
        else printf("fail\n");
    }
    printf("%d\n", cnt);
    return 0;
}