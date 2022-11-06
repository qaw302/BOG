//별찍기

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1; i <= N; i++){
        for(int k=N; i<k; k--){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}