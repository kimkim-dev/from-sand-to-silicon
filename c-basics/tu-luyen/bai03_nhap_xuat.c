#include <stdio.h>
#include <string.h>

int main () {
    char ten[100];
    printf("Nhap ten di ban iu: ");

    fgets(ten, sizeof(ten), stdin); // Sử dụng fgets để đọc toàn bộ chuỗi ký tự, kể cả khoảng trắng
    ten[strcspn(ten, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng nếu có

    int namsinh, NamHienTai=2026;
    printf("Nhap nam sinh di ban iu: ");
    scanf("%d", &namsinh);

    double toan,ly,hoa;
    printf("Nhap diem toan, ly, hoa: ");
    scanf("%lf %lf %lf", &toan,&ly,&hoa);
    
    printf("Ten nguoi dung: %s!\n", ten);
    printf("Tuoi cua %s: %d\n", ten, NamHienTai - namsinh);
    printf("Diem trung binh cua %s: %.2f\n", ten, (toan+ly+hoa)/3.00);
    return 0; 
}
