//영수증

#include<stdio.h>

int main()
{
    int X;
    int N;
    int a,b;
    int sum = 0;

    scanf("%d",&X);
    scanf("%d",&N);

    for(int i=0; i < N; i++){
        scanf("%d %d",&a, &b);
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