#include <stdio.h>

int main() {
    int start, end;// Please write your code here.
    scanf("%d %d", &start, &end);
    int cnt=0;
    for(int i=start; i<=end; i++){
        int sum=0;
        for(int j=1; j<i; j++){
            if(i%j==0) sum += j;
        }
        if(i==sum) cnt++;
    }
    printf("%d", cnt);
    return 0;
}