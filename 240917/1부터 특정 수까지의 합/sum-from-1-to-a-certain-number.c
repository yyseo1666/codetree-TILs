#include <stdio.h>

int PrintSum(int);
int main() {
    int N;
    scanf("%d", &N);

    PrintSum(N);
    return 0;
}

int PrintSum(int n){

    int sum = 0;
    for(int i = 1; i<n+1; i++){
        sum += i;
    }

    printf("%d", sum/10);
}