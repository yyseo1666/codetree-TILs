#include <stdio.h>

void PrintString(int);

int main() {
    int n;
    scanf("%d", &n);
    PrintString(n);

    return 0;
}

void PrintString(int n){
    for(int i = 0; i<n; i++){
        printf("12345^&*()_\n");
    }
}