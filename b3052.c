//나머지

#include <stdio.h>

int main()
{
    int num[10];
    int rst=0;

    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
    }

    for(int i=0; i<10; i++){
        int cnt = 0;
        for(int j=i+1; j<10; j++){
            if(num[i]==num[j]){
                cnt++;
            }
        }
        if(cnt == 0){
            rst++;
        }
    }
    printf("%d", rst);

 
    // break 사용 방식
    /*
    int num[10];
    int rst=0;

    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
    }

    for(int i=0; i<10; i++){
        rst++;
        for(int j=i+1; j<10; j++){
            if(num[i]==num[j]){
                rst--;
                break;
            }
        }
        
    }
    printf("%d",rst);
}*/

   return 0;
}