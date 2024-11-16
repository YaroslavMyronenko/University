#include <stdio.h>
#include <locale.h> // Містить прототип для локалізації

#define nUKR 33 // Потужність абетки

void encrypt(int n) {
    int marker;
    char c;
    FILE *fp1, *fp2;
    fp1 = fopen("in-text.txt", "r");
    if (fp1) {
        fp2 = fopen("out-text.txt", "w");
        while ((c = getc(fp1)) != EOF) {
            marker = 0;
            if (c >= 'А' && c <= 'Я') {
                c = c + (n % nUKR);
                if (c > 'Я') c = 'А' + (c - 'Я') - 1;
                fprintf(fp2, "%c", c);
                marker = 1;
            }
            if (c >= 'а' && c <= 'я') {
                c = c + (n % nUKR);
                if (c > 'я') c = 'а' + (c - 'я') - 1;
                fprintf(fp2, "%c", c);
                marker = 1;
            }
            if (!marker) fprintf(fp2, "%c", c);
        }
        printf("\aКодування відбулося успішно. Зашифрований текст - у out-text.txt.\n");
        fclose(fp1);
        fclose(fp2);
    } else {
        printf("\aФайл in-text.txt не знайдено...\n");
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
            if (c >= 'А' && c <= 'Я') {
                c = c - (n % nUKR);
                if (c < 'А') c = 'Я' - ('А' - c) + 1;
                fprintf(fp2, "%c", c);
                marker = 1;
            }
            if (c >= 'а' && c <= 'я') {
                c = c - (n % nUKR);
                if (c < 'а') c = 'я' - ('а' - c) + 1;
                fprintf(fp2, "%c", c);
                marker = 1;
            }
            if (!marker) fprintf(fp2, "%c", c);
        }
        printf("\aДекодування відбулося успішно. Розшифрований текст - у decipher-out-text.txt.\n");
        fclose(fp1);
        fclose(fp2);
    } else {
        printf("\aФайл out-text.txt не знайдено...\n");
    }
}

int main(void) {
    int k;
    char c;
    setlocale(LC_ALL, ""); // Локалізація консолі
    printf("Шифр Цезаря\nУведіть значення ключа: ");
    scanf("%d", &k);
    getchar();
    printf("Зашифрувати текст у in-text.txt? (Y/N) ");
    scanf("%c", &c);
    getchar();
    if (c == 'Y' || c == 'y') encrypt(k);
    printf("Дешифрувати текст з out-text.txt? (Y/N) ");
    scanf("%c", &c);
    if (c == 'Y' || c == 'y') decipher(k);
    return 0;
}
