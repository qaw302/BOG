//A+B 3

#include<stdio.h>

int main(){
    int n, A, B;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &A, &B);
        printf("%d\n",A+B);
    }
    
    return 0;
}