#include <stdio.h>
#include <locale.h> // ̳����� �������� ��� ����������

#define nUKR 33 // ��������� ������

void encrypt(int n) {
    int marker;
    char c;
    FILE *fp1, *fp2;
    fp1 = fopen("in-text.txt", "r");
    if (fp1) {
        fp2 = fopen("out-text.txt", "w");
        while ((c = getc(fp1)) != EOF) {
            marker = 0;
            if (c >= '�' && c <= '�') {
                c = c + (n % nUKR);
                if (c > '�') c = '�' + (c - '�') - 1;
                fprintf(fp2, "%c", c);
                marker = 1;
            }
            if (c >= '�' && c <= '�') {
                c = c + (n % nUKR);
                if (c > '�') c = '�' + (c - '�') - 1;
                fprintf(fp2, "%c", c);
                marker = 1;
            }
            if (!marker) fprintf(fp2, "%c", c);
        }
        printf("\a��������� �������� ������. ������������ ����� - � out-text.txt.\n");
        fclose(fp1);
        fclose(fp2);
    } else {
        printf("\a���� in-text.txt �� ��������...\n");
    }
}

void decipher(int n) {
    int marker;
    char c;
    FILE *fp1, *fp2;
    fp1 = fopen("out-text.txt", "r");
    if (fp1) {
        fp2 = fopen("decipher-out-text.txt", "w");
        while ((c = getc(fp1)) != EOF) {
            marker = 0;
            if (c >= '�' && c <= '�') {
                c = c - (n % nUKR);
                if (c < '�') c = '�' - ('�' - c) + 1;
                fprintf(fp2, "%c", c);
                marker = 1;
            }
            if (c >= '�' && c <= '�') {
                c = c - (n % nUKR);
                if (c < '�') c = '�' - ('�' - c) + 1;
                fprintf(fp2, "%c", c);
                marker = 1;
            }
            if (!marker) fprintf(fp2, "%c", c);
        }
        printf("\a����������� �������� ������. ������������� ����� - � decipher-out-text.txt.\n");
        fclose(fp1);
        fclose(fp2);
    } else {
        printf("\a���� out-text.txt �� ��������...\n");
    }
}

int main(void) {
    int k;
    char c;
    setlocale(LC_ALL, ""); // ���������� ������
    printf("���� ������\n������ �������� �����: ");
    scanf("%d", &k);
    getchar();
    printf("����������� ����� � in-text.txt? (Y/N) ");
    scanf("%c", &c);
    getchar();
    if (c == 'Y' || c == 'y') encrypt(k);
    printf("����������� ����� � out-text.txt? (Y/N) ");
    scanf("%c", &c);
    if (c == 'Y' || c == 'y') decipher(k);
    return 0;
}
