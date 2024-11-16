#include <stdio.h>
#include <locale.h>

void showAppInfo() {
    printf("�������� ��� ���������� ������ ������ �� �������� ������.\n");
    printf("���������:Yaroslav_Myronenko\n");
    printf("�������� ���: jarik2707@gmail.com\n");
    printf("�����: 1.2\n");
    printf("г� ��������: 2024\n\n");
}

void findHelmetSize(int circumference) {
    if (circumference >= 53 && circumference <= 54) {
        printf("����� XS (��������)\n");
    } else if (circumference >= 55 && circumference <= 56) {
        printf("����� S (��������)\n");
    } else if (circumference >= 57 && circumference <= 58) {
        printf("����� M (��������)\n");
    } else if (circumference >= 59 && circumference <= 60) {
        printf("����� L (��������)\n");
    } else if (circumference >= 61 && circumference <= 62) {
        printf("����� XL (��������)\n");
    } else if (circumference >= 48 && circumference <= 49) {
        printf("����� S (�������)\n");
    } else if (circumference >= 50 && circumference <= 51) {
        printf("����� M (�������)\n");
    } else if (circumference >= 52 && circumference <= 53) {
        printf("����� L (�������)\n");
    } else {
        printf("������ ��������. ���� �����, ������ ������ ������ �� 48 �� 62 ��.\n");
    }
}

int main() {
    char *locale = setlocale(LC_ALL, "");
    int circumference;
    char repeat;

    // Display application information
    showAppInfo();

    do {
        printf("������ ������ ������ � ����������� (48-62): ");
        scanf("%d", &circumference);

        findHelmetSize(circumference);

        printf("������ 'f' ��� 'F' ��� ����������� ��� ���� ������ ��� ������: ");
        scanf(" %c", &repeat);  // Note the space before %c to consume the newline
    } while (repeat == 'f' || repeat == 'F');

    printf("�������� ���������.\n");
    return 0;
}
