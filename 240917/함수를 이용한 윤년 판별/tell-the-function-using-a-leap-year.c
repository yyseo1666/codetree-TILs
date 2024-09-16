#include <stdio.h>

int dbssus(int);
int main() {
    int y;
    scanf("%d", &y);

    if(dbssus(y))
        printf("true");
    else
        printf("false");

    return 0;
}

int dbssus(int y){

    if(!(y%4)){
        if((y%100)==0 && (y%400)!=0){
            return 0;
        }
        else 
            return 1;
    }
}