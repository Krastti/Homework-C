#include <stdio.h>
#include <windows.h>

// № 1.2.1
int function_1(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

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

// № 1.2.4
int function_2(void)
{
    // Смена кодировки под UTF 8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    double sum = 0, a;
    printf("Подсчёт математического ожидания\n");
    printf("Введите число n: \n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Ошибка ввода\n");
        return -1;
    }

    for (int i=0; i < n; i++)
    {
        printf("Введите чисто a: \n");
        scanf("%lf", &a);

        sum += a;
    }
    double M = sum / n;
    printf("Получившиеся математическое ожидание: %lf", M);

    return 0;
}

// 1.2.5
int function_3(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    double sumM = 0, sumD = 0, a;
    printf("Вычисление дисперсии \n");
    printf("Введите число n: \n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Ошибка ввода\n");
        return -1;
    }

    // Вычисление мат. ожидания и дисперсии
    for (int i=0, M; i < n; i++)
    {
        printf("Введите число a: \n");
        scanf("%lf", &a);

        sumM += a;
        M = sumM / n;

        sumD += (a - M) * (a - M);
    }
    double D = sumD / n;
    printf("Получившаяся дисперсия: %lf", D);

    return 0;
}

// 1.2.8
int function_4(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x;
    int n = 0, z = 0, p = 0;
    int sum = 0;

    while (scanf(%f), %x)
    {
        if (x > 0)
        {
            p += 1;
        } else
        {
            if (x < 0)
            {
                n += 1;
            } else
            {
                z += 1;
            }
        }
    }
    sum = p + z + n;
    printf("Получившаяся сумма: %d", sum);
    return 0;
}