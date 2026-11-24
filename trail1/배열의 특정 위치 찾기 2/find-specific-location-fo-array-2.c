#include <stdio.h>

int main() {
    int arr[10];// Please write your code here.
    int sum_odd=0;
    int sum_even=0;
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        if(i%2==0) sum_odd += arr[i];
        if(i%2!=0) sum_even += arr[i];
    }
    if(sum_odd>sum_even) printf("%d", sum_odd-sum_even);
    else printf("%d", sum_even-sum_odd);
    return 0;
}