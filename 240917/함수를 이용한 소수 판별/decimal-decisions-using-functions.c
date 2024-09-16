#include <stdio.h>

int Prime(int, int);
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", Prime(a, b));
    return 0;
}
int Prime(int a, int b){
    
    int sum = 0;
    if(a == 2){
        sum = 2;
    }
    for(int i = a; i<b+1; i++){
        for(int j = 2; j<i; j++){
            if(i%j){
                if(j==i-1){
                    sum+=i;
                }
            }
            else{
                break;
            }
        }
    }
    return sum;
}