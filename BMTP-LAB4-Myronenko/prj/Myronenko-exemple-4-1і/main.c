#include <stdio.h>
#include <locale.h>

int main(void) {
  float a;
  char *locale = setlocale(LC_ALL, "");
    printf("¬вед≥ть довжину гран≥ куба (м): ");
     scanf("%f",&a);
    printf("06\'Їм куба: %0.2f м.", a*a*a);
     puts ("\n\nƒл€ завершенн€ натисн≥ть Enter...");
     getch();
return 0;
}
