#include <stdio.h>

int main() {
    int ma, sl;
    float gia, gg, tien;

    printf("Nhap ma sp, so luong: ");
    scanf("%d %d", &ma, &sl);

    if (ma == 1)      { gia = 10; gg = 0.05; }
    else if (ma == 2) { gia = 15; gg = 0.07; }
    else if (ma == 3) { gia = 30; gg = 0.03; }
    else {
        printf("Ma sp sai\n");
        return 0;
    }

    tien = sl * gia;
    if (sl >= 5) tien = tien * (1 - gg);

    printf("Tien can tra: %.0f dong\n", tien * 1000);
    return 0;
}
