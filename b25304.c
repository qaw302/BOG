//영수증

#include<stdio.h>

int main()
{
    int X;
    int N;
    int a,b;
    int sum = 0;

    printf("X: ");
    scanf("%d\n",&X);
    printf("N: ");
    scanf("%d\n",&N);

    for(int i=0; i < N; i++){
        printf("a b: ");
        scanf("%d %d\n",&a, &b);
        sum += a*b;
    }

    if(X == sum){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}