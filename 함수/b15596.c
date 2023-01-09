//정수 N개의 합

#include <stdio.h>
#include <string.h>

long long sum(int *a, int n){
    long long ans = 0;
    for (int i; i<n; i++) {
        ans += a[i];
    }

    return ans;
}


//main 함수는 문제에 포함되지 않음
int main()
{
    int n;
    int result = 0;

    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    result = sum(a, n);
    printf("%d", result);

    return 0;
}