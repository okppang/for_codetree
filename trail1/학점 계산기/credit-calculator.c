#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);// Please write your code here.
    
    double arr[100];
    double sum=0;
    double avg;

    for(int i=0; i<N; i++){
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    avg = (double)sum/N;
    printf("%.1lf\n", avg);
    if(avg>=4.0) printf("Perfect");
    else if(avg>=3.0) printf("Good");
    else printf("Poor");
    return 0;
}