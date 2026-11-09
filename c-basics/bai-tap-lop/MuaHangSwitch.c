#include <stdio.h>
int main () {
    int ma, sl;
    float gia, gg, tien;
        printf ("Nhap ma sp, so luong: ");
        scanf ("%d %d", &ma, &sl);
        if (ma < 1 || ma > 3 || sl < 1) {
            printf ("Ma sp hoac so luong khong hop le\n");
        }
        else {
            switch (ma) {
                case 1: gia = 10; gg = 0.05; break;
                case 2: gia = 15; gg = 0.07; break;
                case 3: gia = 30; gg = 0.03; break;
            }
        tien = sl * gia;
        if (sl >=5) tien = tien * (1 - gg);

        printf("Tien can tra: %.0f dong\n", tien*1000);
        }
    return 0;
}
