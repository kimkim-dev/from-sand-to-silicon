#include <stdio.h> 
int main () {
    double a;
    printf("Nhap diem:");
    scanf("%lf", &a);
    if (a<0 || a>10) {
        printf("Diem khong hop le ban iu oi\n");
    } else if (a>=8) {
        printf("Xep loai Gioi\n");
    } else if (a>=6.5) {
        printf("Xep loai Kha\n");
    } else if (a>=5) {
        printf("Xep loai Trung binh\n");
    } else {
        printf("Xep loai Rot\n");
    }
    return 0;
}
