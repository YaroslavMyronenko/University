#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float r, s, m;
    printf("Enter values for i and j: ");
    scanf("%d %d", &i, &j);
    r = i + j * i/j;
    s = r + 1;
    float result;
    result = r + s +1;
    m = s / (r -1);

    printf("result = %.2f\n", result);
    printf("s = %.2f\n", s);
    printf("m = %.2f\n", m);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    return 0;
}
