//최댓값

#include <stdio.h>

int main()
{
    int n[9];
    int max=0;
    int cnt = 0;

    for(int i=0; i < 9; i++){
        scanf("%d", &n[i]);
    }

    for(int j=0; j < 9; j++){
        if(max < n[j]){
            max = n[j];
            cnt = j+1;
        }
    }

    printf("%d\n%d", max, cnt);

    return 0;
}