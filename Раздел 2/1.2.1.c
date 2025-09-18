#include <stdio.h>
#include <windows.h>

int main(void)
{
    // Смена кодировки под UTF 8
    SetConsoleOutputCP(CP_UTF8);

    int n, a;
    int sum = 0 , i = 0;

    printf("Введите число: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Введите число a: \n");
        scanf("%d", &a);

        sum += a;
    }
    printf("Получившаяся сумма = %d", sum);
    return 0;
}