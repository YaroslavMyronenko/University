#include <stdio.h>
#include <locale.h>

int main(void) {
  float a;
  char *locale = setlocale(LC_ALL, "");
    printf("������ ������� ���� ���� (�): ");
     scanf("%f",&a);
    printf("06\'�� ����: %0.2f �.", a*a*a);
     puts ("\n\n��� ���������� �������� Enter...");
     getch();
return 0;
}
