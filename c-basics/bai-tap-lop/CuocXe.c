#include <stdio.h>
int main (){ 
    int ma, SoKm;
    float KmDau, tien;
    printf("Nhap ma xe, so km: ");
    scanf("%d %d", &ma, &SoKm);
    switch (ma) {
        case 1: KmDau = 10000;
        if (SoKm <= 1) tien = KmDau;
        else if (SoKm > 1 && SoKm <6) tien = KmDau + (SoKm - 1) * 8500;
        else if (SoKm >= 6) tien = KmDau + 4 * 8500 + (SoKm - 5) * 7000;
        break;
        case 2: KmDau = 12000;
        if (SoKm <= 1) tien = KmDau;
        else if (SoKm > 1 && SoKm <6) tien = KmDau + (SoKm - 1) * 10000;
        else if (SoKm >= 6) tien = KmDau + 4 * 10000 + (SoKm - 5) * 9000;
        break;
        case 3: KmDau = 15000;
        if (SoKm <= 1) tien = KmDau;
        else if (SoKm > 1 && SoKm <6) tien = KmDau + (SoKm - 1) * 11000;
        else if (SoKm >= 6) tien = KmDau + 4 * 11000 + (SoKm - 5) * 10000;
        break;
        default: printf("Ma xe khong hop le\n");
        return 0;
    }
    printf("Tien phai tra: %.0f\n", tien);
    return 0;
}