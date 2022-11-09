//과제 안 내신 분..?

#include <stdio.h>

int main()
{
    int std[30]={0};    //초기화 해줘야함.
    int s;
    for (int i=0; i < 28; i++){
        scanf("%d", &s);
        std[s-1]=s;
    }
    for (int i=0; i < 30; i++){
        if (std[i] == 0){
            printf("%d\n", i+1);
        }

    }


    return 0;
}