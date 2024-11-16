#include <stdio.h>
#include <locale.h>
int main() {
    char *locale = setlocale(LC_ALL, "");
    int a, b, c, d, e;
    int sum, multiplication;

    printf("Введіть значення a, b, c, d, e:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a < b && b < c && c < d && d < e) {
        sum = a + b + c + d + e;
        printf("Сума: %d\n", sum);
    }
    else if (a * a * a == e * e * e * e) {
        multiplication = a * b * c * d * e;
        printf("Добуток: %d\n", multiplication);
    }
    else {
        printf("Жодна умова не виконана.\n");
    }
    return 0;
}
