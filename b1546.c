//평균

#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    float scores[N];
    float sum=0;
    int M = 0;

    for(int i=0; i<N; i++){
        scanf("%f",&scores[i]);
        if(M < scores[i]){
            M = scores[i];
        }
    }

    for(int i=0; i<N; i++){
        scores[i] = scores[i] / M * 100;
        sum += scores[i];
    }
    printf("%f",sum/N);


    return 0;
}