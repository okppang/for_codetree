#include <stdio.h>

int main() {
    int arr[10];// Please write your code here.
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(int i=0; i<10; i++){
        if(i%2!=0) sum += arr[i];
    }
    int cnt=0;
    int sum_3=0;
    for(int i=0; i<10; i++){
        if(i%3==2){
            cnt++;
            sum_3 += arr[i];
        }
    }
    printf("%d %.1lf", sum, (double)sum_3/cnt);
    return 0;
}