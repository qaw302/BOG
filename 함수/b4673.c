//¼¿ÇÁ³Ñ¹ö

#include <stdio.h>

int d(int n){
    int dn = n;
    while(n > 0){
        dn += n % 10;
        n /= 10;
    }
    return dn;
}

int main()
{
    int arr_dn[10001]={0,};
    for (int i; i<10000; i++){
        int notSelfN = d(i);
        if (notSelfN < 10001)
            arr_dn[notSelfN] = 1;
    }
    for(int i; i < 10000; i++){
        if(arr_dn[i] != 1){
            printf("%d\n", i);
        }
    }

    return 0;
}