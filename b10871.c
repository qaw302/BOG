//X보다 작은 수

#include <stdio.h>

int main()
{
    int N, X;
    int A[10000];
    scanf("%d %d", &N, &X);

    for(int i; i < N; i++){
        scanf("%d", &A[i]);
    }
    for(int j; j < N; j++){
        if(A[j] < X ){
            printf("%d ",A[j]);
        }
    }

    return 0;
}