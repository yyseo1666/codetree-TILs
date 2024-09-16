#include <stdio.h>


void PrintStar();

int main() {
    
    for(int i = 0; i<5; i++){
        PrintStar();
        printf("\n");
    }

    return 0;
}

void PrintStar(){
    
    for(int i = 0; i<10; i++){
        printf("*");
    }

}