#include <stdio.h>

void Rectangle(int, int);
int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    Rectangle(n, m);

    return 0;
}

void Rectangle(int n, int m){

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("1");
        }
        printf("\n");
    }

}