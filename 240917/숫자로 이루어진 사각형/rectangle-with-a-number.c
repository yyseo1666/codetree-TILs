#include <stdio.h>

void PrintSquare(int);
int main() {
    
    int N;
    scanf("%d", &N);

    PrintSquare(N);

    return 0;
}

void PrintSquare(int n){

    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", num);
            num++;
            if(num==10){
                num = 1;
            }
        }
        printf("\n");
    }

}