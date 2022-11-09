//OX퀴즈

#include <stdio.h>

int main()
{
    int n;
    char ox[81];
    int score;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        score = 0;
        int cnt = 0;
        scanf("%s", ox);
        for(int j=0; ox[j] != NULL; j++){
            if(ox[j] =='O'){
               cnt++;
               score += cnt;
            }
            else{
                cnt = 0;
            }
        }
        printf("%d\n", score);
    }
    
    return 0;
}