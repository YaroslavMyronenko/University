#include <stdio.h>
#include <locale.h>
struct WaveData {
    int grade;
    char description[30];
    float height_ft, height_m;
};

int main() {
    char *locale = setlocale(LC_ALL, "");
    struct WaveData waves[] = {
        {0, "CALM-GLASSY", 0, 0},
        {1, "CALM-RIPPLED", 0,15, 0.05},
        {2, "SMOOTH-WAVELET", 0.33, 0.1},
        {3, "SLIGHT", 0.66, 0.5},
        {4, "MODERATE", 4, 1.25},
        {5, "ROUGH", 8, 2.50},
        {6, "VERY ROUGH", 13, 4.00},
        {7, "HIGH", 20, 6.00},
        {8, "VERY HIGH", 30, 9.00},
        {9, "PHENOMENAL", 50, 16.00}
    };

    int numWaves = sizeof(waves) / sizeof(waves[0]); // Кількість елементів масиву
    int grade;

    printf("Введіть бал хвилювання за шкалою IMO (0-9): ");
    scanf("%d", &grade);

    // Перевірка введеного балу на коректність
    if (grade < 0 || grade > 9) {
        printf("Некоректний бал хвилювання.\n");
        return 1;
    }

    // Пошук відповідної структури та виведення результату
    for (int i = 0; i < numWaves; i++) {
        if (waves[i].grade == grade) {
            printf("Опис хвилювання: %s\n", waves[i].description);
            printf("Висота хвилі (фути): %.2f ft\n", waves[i].height_ft);
            printf("Висота хвилі (метри): %.2f m\n", waves[i].height_m);
            break;
        }
    }

    return 0;
}
