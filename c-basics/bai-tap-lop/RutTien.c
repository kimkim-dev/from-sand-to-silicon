#include <stdio.h>
int main() {
    int SoDu, tien,lan, maPin, Menu;
    SoDu = 10000000; lan = 0;

    do {
    printf("Nhap ma pin: ");
    scanf("%d", &maPin);
    } while (maPin != 1234 && ++lan < 3);

    if (maPin == 1234) {
        do {
        printf("1. Rút tiền, 2. Xem số dư, 0. Thoát\n");
        scanf("%d", &Menu);
            switch (Menu) {
                case 1: 
                    printf("Nhap so tien can rut: ");
                    scanf("%d", &tien);

                    if (tien>0 && tien <= 5000000 && tien % 50000 == 0) {
                        if (tien <= SoDu) {
                            SoDu -= tien;
                            printf("Rut tien thanh cong. So du con lai: %d dong\n", SoDu);
                            printf("So to 500k: %d\n", tien/500000);
                            printf("So to 200k: %d\n", tien%500000/200000);
                            printf("So to 100k: %d\n", tien%500000%200000/100000);
                            printf("So to 50k: %d\n", tien%500000%200000%100000/50000);
                        } else {
                            printf("Khong du so du\n");
                        }
                    } else {
                        printf("So tien sai\n");
                    }
                    break;
                case 2: printf("So du hien tai: %d dong\n", SoDu); 
                case 0: break;
                default: printf("Lua chon khong hop le\n"); 
            }
        } while (Menu != 0);
    } else { 
        printf("Khoa the\n");
    }

    return 0;
}

