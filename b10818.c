//최소, 최대

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a[N];    //N을 먼저 초기화하고 정의해야함 !

    for(int i=0; i < N; i++){
        scanf("%d", &a[i]);
    }

    int min = a[0]; 
    int max = a[0];
    for(int j=0; j < N; j++){
        if (a[j] < min){
            min = a[j];
        }
        if (a[j] > max){
            max = a[j];
        }
    }

    printf("%d %d", min, max);

    return 0;
}