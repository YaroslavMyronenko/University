#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char *locale = setlocale(LC_ALL, "");
    float a, b, c;
    printf("Введіть значення a та b: \n");
    scanf("%f %f", &a, &b);
    c = a * a + b * b;
    c = c * c * c;
    printf("Значення c після обчислення c = (a*a + b*b)^3: %.2f\n", c);
    c = a + b + (a / b - c);
    printf("Кінцеве значення c після другого обчислення c = a + b + (a / b - c): %.2f\n", c);
    return 0;
}
