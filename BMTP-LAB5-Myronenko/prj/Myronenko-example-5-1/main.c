#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
    unsigned short dd, mm, yy;
    system("chcp 1251 & cls");  // Set code page to 1251 and clear screen

    do {
        printf("������ ���� (��), ����� (MM), �� (����):\n");
        printf("����: ");
        scanf("%hu", &dd);
        printf("̳����: ");
        scanf("%hu", &mm);
        printf("г�: ");
        scanf("%hu", &yy);

        if (dd >= 1 && dd <= 31 && mm >= 1 && mm <= 12) {
            switch (mm) {
                case 1: printf("%02d ���� %d ����\n", dd, yy); break;
                case 2: printf("%02d ������ %d ����\n", dd, yy); break;
                case 3: printf("%02d ������� %d ����\n", dd, yy); break;
                case 4: printf("%02d ����� %d ����\n", dd, yy); break;
                case 5: printf("%02d ������ %d ����\n", dd, yy); break;
                case 6: printf("%02d ������ %d ����\n", dd, yy); break;
                case 7: printf("%02d ����� %d ����\n", dd, yy); break;
                case 8: printf("%02d ������ %d ����\n", dd, yy); break;
                case 9: printf("%02d ������� %d ����\n", dd, yy); break;
                case 10: printf("%02d ������ %d ����\n", dd, yy); break;
                case 11: printf("%02d ��������� %d ����\n", dd, yy); break;
                case 12: printf("%02d ������ %d ����\n", dd, yy); break;
                default: break;
            }
        } else {
            printf("������� ����...\n");
        }

        printf("���������? (�/�): ");
        char choice = getch();
        if (choice == '�' || choice == '�' || choice == 'Y' || choice == 'y') {
            break;
        }

        printf("\n");
    } while (1);

    return 0;
}
