//평균은 넘겠지

#include <stdio.h>

int main()
{
    int C, N;

    float avg;

    scanf("%d",&C);
    for(int i=0; i<C; i++){
        int sum = 0;
        int cnt = 0;
        scanf("%d", &N);
        int scores[N];
        for(int j=0; j<N; j++){
            scanf("%d",&scores[j]);
            sum += scores[j];
        }
        avg = sum/N;
        for(int j=0; j<N; j++){
            if(scores[j] > avg){
                cnt++;
            }
        }
        printf("%.3f%%\n", (float)cnt/N * 100);
    }

    return 0;
}