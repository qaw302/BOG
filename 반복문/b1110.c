//더하기 사이클

#include <stdio.h>

int main()
{
    int f_num, l, r, num;
    int count = 0;

    scanf("%d", &f_num);
    num = f_num;

    while(1){
        l = num / 10;
        r = num % 10;
        num = (r*10) + ((l+r)%10);

        count ++;

        if(f_num == num){
            break;
        }
    }
    printf("%d\n", count);

    return 0;
}

/*
new 연산자가 있기에 변수로 사용하면 안됨! ㅜㅜ
*/