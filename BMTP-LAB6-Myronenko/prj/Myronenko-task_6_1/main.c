#include <stdio.h>
#include <locale.h>

void showAppInfo() {
    printf("Програма для визначення розміру шолому за обхватом голови.\n");
    printf("Розробник:Yaroslav_Myronenko\n");
    printf("Контактні дані: jarik2707@gmail.com\n");
    printf("Версія: 1.2\n");
    printf("Рік розробки: 2024\n\n");
}

void findHelmetSize(int circumference) {
    if (circumference >= 53 && circumference <= 54) {
        printf("Розмір XS (Дорослий)\n");
    } else if (circumference >= 55 && circumference <= 56) {
        printf("Розмір S (Дорослий)\n");
    } else if (circumference >= 57 && circumference <= 58) {
        printf("Розмір M (Дорослий)\n");
    } else if (circumference >= 59 && circumference <= 60) {
        printf("Розмір L (Дорослий)\n");
    } else if (circumference >= 61 && circumference <= 62) {
        printf("Розмір XL (Дорослий)\n");
    } else if (circumference >= 48 && circumference <= 49) {
        printf("Розмір S (Дитячий)\n");
    } else if (circumference >= 50 && circumference <= 51) {
        printf("Розмір M (Дитячий)\n");
    } else if (circumference >= 52 && circumference <= 53) {
        printf("Розмір L (Дитячий)\n");
    } else {
        printf("Невірне значення. Будь ласка, введіть обхват голови від 48 до 62 см.\n");
    }
}

int main() {
    char *locale = setlocale(LC_ALL, "");
    int circumference;
    char repeat;

    // Display application information
    showAppInfo();

    do {
        printf("Введіть обхват голови в сантиметрах (48-62): ");
        scanf("%d", &circumference);

        findHelmetSize(circumference);

        printf("Введіть 'f' або 'F' для продовження або іншу клавішу для виходу: ");
        scanf(" %c", &repeat);  // Note the space before %c to consume the newline
    } while (repeat == 'f' || repeat == 'F');

    printf("Програма завершена.\n");
    return 0;
}
