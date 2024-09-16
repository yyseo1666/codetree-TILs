#include <stdio.h>

int judge(int);
int main() {
    int n;
    scanf("%d", &n);

    if(judge(n)){
        printf("Yes");
    }
    else
        printf("No");

    return 0;
}
int judge(int n){

    if(!(n%2)){
        int num;
        if((n/10 + n%10)%5){
            return 0;
        }
        else return 1;
    }
    else return 0;

}