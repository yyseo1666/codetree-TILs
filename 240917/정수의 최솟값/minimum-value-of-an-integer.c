#include <stdio.h>

int FindMin(int, int, int);
int main() {
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = FindMin(a, b, c);
    printf("%d", min);

    return 0;
}

int FindMin(int a, int b, int c){
    int min;
    
    if(a>b && c>b)
        min = b;
    if(b>a&&c>a)
        min = a;
    if(a>c&&b>c)
        min = c;

    return min;
}