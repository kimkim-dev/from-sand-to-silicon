#include <stdio.h>
int main() {
    int a,b;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
     if (b==0) {
        printf("Khong the chia cho 0\n");
        return 1; // Exit the program with an error code
    } 
    printf("Tong: %d\n", a+b);
    printf("Hieu: %d\n", a-b);
    printf("Tich: %d\n", a*b);
    printf("Thuong: %f\n", (float)a/b);
    return 0;
}
