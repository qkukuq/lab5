#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int* a = NULL;
    int i, j, n, m, c0, cp, cn;
    c0 = 0; cp = 0; cn = 0;
    printf("Введите количество строк: ");
    scanf_s("%d", &n);
    printf("Введите количество столбцов: ");
    scanf_s("%d", &m);
    a = (int*)malloc(n * m * sizeof(int));   // Выделение памяти
    printf("Введите элементы массива:\n ");
    for (i = 0; i < n; i++, putchar('\n'))  // цикл по строкам
    {
        for (j = 0; j < m; j++)  // цикл по столбцам
        {
           /* printf("a[%d][%d] = ", i, j);
            scanf_s("%d", (a + i * m + j));*/
            *(a + i * m + j) = rand() % 20 - 10;
            printf("%2d ", *(a + i * m + j));
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            if (*(a+i*m+j)> 0) 
                cp++;
            else if (*(a + i * m+ j) < 0)
                cn++;
            else 
                c0++;
        }
     }
    printf("\nКоличество положительных элементов массива: %d", cp);
    printf("\nКоличество отрицательных элементов массива: %d", cn);
    printf("\nКоличество элементов массива равных нулю: %d", c0);
    return 0;
}
