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

    while (scanf("%d", &x))
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

// 1.2.21
int function_5(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.2.22
int function_6(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.2.23
int function_7(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.2.24
int function_8(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.2.25
int function_9(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.2.26
int function_10(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.2.27
int function_11(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.2.43
int function_12(void)
{
    // Смена кодировки
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Объявление и инициализация переменных
    int i = 1, count = 0;
    int n, x;
    int flag = 0;

    // Начало программы
    printf("Введите n: \n");
    scanf("%d", &n);

    printf("Начните ввод последовательности.\n");
    scanf("%d", &x);

    int pred = x; // pred от слова предыдущий

    printf("Чтобы закончить ввод последовательности, введите Q\n");
    while (scanf("%d", &x))
    {
        if (x == pred)
        {
            if (flag == 1)
            {
                i += 1;
                pred = x;
            }
            else
            {
                flag = 1;
                pred = x;
                i += 1;
            }
        }
        else
        {
            if (i >= n)
            {
                i = 1;
                count += 1;
                pred = x;
            }
            else
            {
                i = 1;
                flag = 0;
                pred = x;
            }
        }
    }
    if (i >= n)
    {
        count += 1;
    }
    printf("Число участков последовательности не меньше n: %d", count);
    return 0;
}