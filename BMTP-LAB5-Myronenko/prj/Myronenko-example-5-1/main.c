#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
    unsigned short dd, mm, yy;
    system("chcp 1251 & cls");  // Set code page to 1251 and clear screen

    do {
        printf("Введіть день (ДД), місяць (MM), рік (РРРР):\n");
        printf("День: ");
        scanf("%hu", &dd);
        printf("Місяць: ");
        scanf("%hu", &mm);
        printf("Рік: ");
        scanf("%hu", &yy);

        if (dd >= 1 && dd <= 31 && mm >= 1 && mm <= 12) {
            switch (mm) {
                case 1: printf("%02d січня %d року\n", dd, yy); break;
                case 2: printf("%02d лютого %d року\n", dd, yy); break;
                case 3: printf("%02d березня %d року\n", dd, yy); break;
                case 4: printf("%02d квітня %d року\n", dd, yy); break;
                case 5: printf("%02d травня %d року\n", dd, yy); break;
                case 6: printf("%02d червня %d року\n", dd, yy); break;
                case 7: printf("%02d липня %d року\n", dd, yy); break;
                case 8: printf("%02d серпня %d року\n", dd, yy); break;
                case 9: printf("%02d вересня %d року\n", dd, yy); break;
                case 10: printf("%02d жовтня %d року\n", dd, yy); break;
                case 11: printf("%02d листопада %d року\n", dd, yy); break;
                case 12: printf("%02d грудня %d року\n", dd, yy); break;
                default: break;
            }
        } else {
            printf("Помилка дати...\n");
        }

        printf("Завершити? (Т/Н): ");
        char choice = getch();
        if (choice == 'Т' || choice == 'т' || choice == 'Y' || choice == 'y') {
            break;
        }

        printf("\n");
    } while (1);

    return 0;
}
