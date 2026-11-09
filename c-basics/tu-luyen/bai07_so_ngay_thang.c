#include <stdio.h>
int main () {
    int thang;
    do { 
        printf("Nhap thang: ");
        scanf("%d", &thang);
    } while (thang < 1 || thang > 12);
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf ("Thang %d co 31 ngay\n", thang);
            break;
        case 4: case 6: case 9: case 11:
            printf ("Thang %d co 30 ngay\n", thang);
            break; // bo break: nhap 4 in ca 30 ngay lan 28 ngay vi chay lo xuong case 2.
        case 2:
            printf ("Thang %d co 28 hoac 29 ngay\n", thang);
            break;
    }
    return 0;
}