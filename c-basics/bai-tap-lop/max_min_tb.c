#include <stdio.h>
int main (){
    double a,b,c;
    printf("Nhap 3 so thuc: "); 
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Nhap sai! Dung dau cham, vd: 1.5\n");
        return 1;
    }
    double max = a;
    if (b>max) max=b;
    if (c>max) max=c;
    double min = a;
    if (b<min) min=b;
    if (c<min) min=c;
    printf("So lon nhat la: %.2f\n", max);
    printf("So nho nhat la: %.2f\n", min);
    printf("Trung binh: %.2f\n", (a+b+c)/3);
    return 0;
}
