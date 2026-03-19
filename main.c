#include <stdio.h>

int main() {

    int pin = 1234;
    int oruulsanpin;
    int uldegdel = 10000;
    int songolt;
    int mungu;

    printf("PIN code oo oruulna uu: ");
    scanf("%d", &oruulsanpin);

    if(oruulsanpin == pin) {

        printf("\n1 - Uldegdel harah\n");
        printf("2 - Mungu hiih\n");
        printf("3 - Mungu avah\n");
        printf("Songoltoo oruulna uu: ");
        scanf("%d", &songolt);

        if(songolt == 1) {
            printf("Tanii uldegdel: %d tugrug\n", uldegdel);
        }

        else if(songolt == 2) {
            printf("Heden tugrug hiih ve: ");
            scanf("%d", &mungu);
            uldegdel = uldegdel + mungu;
            printf("Shine uldegdel: %d tugrug\n", uldegdel);
        }

        else if(songolt == 3) {
            printf("Heden tugrug avah ve: ");
            scanf("%d", &mungu);

            if(mungu <= uldegdel) {
                uldegdel = uldegdel - mungu;
                printf("Uldegdel: %d tugrug\n", uldegdel);
            }
            else {
                printf("Uldegdel hureltsehgui baina!\n");
            }
        }

        else {
            printf("Ta buruu songolt hiisen baina!\n");
        }

    }
    else {
        printf("PIN code buruu baina!\n");
    }

    return 0;
}