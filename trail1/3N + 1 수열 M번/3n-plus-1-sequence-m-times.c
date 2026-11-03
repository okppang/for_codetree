#include <stdio.h>

int main() {
    int M;// Please write your code here.
    scanf("%d", &M);
    int N;
    for(int i=0; i<M; i++){
            scanf("%d", &N);
            int cnt=0;
            while(N!=1){
            if(N%2==0){
                N/=2;
                cnt++;
            }  
            else{
                N = 3*N + 1;
                cnt++;
            }
        }
        if(N==1) printf("%d", cnt);
        printf("\n");
    }
    return 0;
}