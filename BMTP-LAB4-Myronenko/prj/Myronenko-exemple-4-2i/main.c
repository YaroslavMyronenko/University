#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char *locale = setlocale(LC_ALL, "");
    float a, b, c;
    printf("������ �������� a �� b: \n");
    scanf("%f %f", &a, &b);
    c = a * a + b * b;
    c = c * c * c;
    printf("�������� c ���� ���������� c = (a*a + b*b)^3: %.2f\n", c);
    c = a + b + (a / b - c);
    printf("ʳ����� �������� c ���� ������� ���������� c = a + b + (a / b - c): %.2f\n", c);
    return 0;
}
