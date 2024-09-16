#include <stdio.h>

void func(int, int);
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    func(n, m);

    return 0;
}

void func(int n, int m){

    int num = 1;
    if(n>m){
        for(int i = 1; i<m+1; i++){
            if(n%i==0 && m%i==0){
                num = i;
            }
        }
    }
    else{
        for(int i = 1; i<n+1; i++){
            if(n%i==0 && m%i==0){
                num = i;
            }
        }
    }

    printf("%d", num*(n/num)*(m/num));

}