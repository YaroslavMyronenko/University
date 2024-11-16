#include <stdio.h>
#include <stdlib.h>

void get_matr(int m[255][255], int p[255][255], unsigned char i, unsigned char j, unsigned char k) {
    int ki, kj, di = 0, dj;
    for (ki = 0; ki < k - 1; ki++) {
        if (ki == i) di = 1;
        dj = 0;
        for (kj = 0; kj < k - 1; kj++) {
            if (kj == j) dj = 1;
            p[ki][kj] = m[ki + di][kj + dj];
        }
    }
}

void print_matr(int m[255][255], unsigned char n) {
    unsigned char i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", m[i][j]);
        putchar('\n');
    }
}

int determinant(int m[255][255], unsigned char nxn) {
    unsigned char i, j = 0, d = 0, k = 1, n;
    int p[255][255];
    n = nxn - 1;
    if (nxn < 1) {
        printf("Визначник обчислити неможливо...");
        return 0;
    }
    if (nxn == 1) {
        d = m[0][0];
        return d;
    }
    if (nxn == 2) {
        d = m[0][0] * m[1][1] - (m[1][0] * m[0][1]);
        return d;
    }
    if (nxn > 2) {
        for (i = 0; i < nxn; i++) {
            get_matr(m, p, i, 0, nxn);
            d = d + k * m[i][0] * determinant(p, n);
            k = -k;
        }
    }
    return d;
}

int main(void) {
    unsigned char nxn, i, j;
    int m[255][255];
    system("chcp 1251 & cls");
    printf("Задайте розмірність квадратної матриці: ");
    scanf("%hhd", &nxn);
    for (i = 0; i < nxn; i++) {
        for (j = 0; j < nxn; j++) {
            printf("m[%hhd][%hhd] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    printf("\nВизначник матриці %dx%d\n", nxn, nxn);
    print_matr(m, nxn);
    printf("рівний %d \n", determinant(m, nxn));
    printf("\nДля завершення натисніть будь-яку клавішу...");
    getchar();
    return 0;
}
