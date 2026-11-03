#include <stdio.h>
int main () {
    int a=11 , b=5; float c;
    printf("thuong: %d\n", a/b); //2
    printf("du: %d\n", a%b); // 1
    printf("thap phan: %.2f\n", (double)a/b); //2.20 
    printf("chia le: %.1f\n", a/2.0); //5.5
    
    int x=5;
    printf("x++: %d\n", x++); //5
    printf("++x: %d\n", ++x); //7
    printf("x: %d\n", x); //7

    c = --a / b++;
    printf("%d %d %.2f\n", a, b, c); // 10 6 2.00

return 0;
}
