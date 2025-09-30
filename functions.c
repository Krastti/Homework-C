#include <stdio.h>
#include <windows.h>

// Функция возведения в степень
int power_int(int base, int exponent) {
    if (exponent == 0) return 1;
    if (base == 0) return 0;

    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }

    int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

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
    printf("Подсчёт положительных, отрицательных и нулевых элементов последовательности.\n");
    printf("Начните ввод элементов последовательности\n");
    printf("Чтобы закончить ввод последовательности, введите q\n");
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
    printf("Получившаяся сумма элементов последовательности: %d\n Из них:\n", sum);
    printf(" отрицательных %d\n", n);
    printf(" нулевых %d\n", z);
    printf(" положительных %d\n", p);
    return 0;
}

// 1.2.21
int function_5(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x, i = 0;
    printf("Сколько раз встречается первый элемент в последовательности\n");
    printf("Введите x \n");
    scanf("%d", &x);
    const int res = x;
    printf("Начните ввод последовательности элементов.\n");
    printf("Чтобы закончить ввод последовательности, введите q\n");
    while (scanf("%d", &x))
    {
        if (x == res)
        {
            i++;
        }
    }
    printf("Сумма эленентов в последовательности равная первому элементу: %d", i);
    return 0;
}

// 1.2.22
int function_6(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x, i = 0;
    printf("Первый элемент последовательности равный x\n");
    printf("Введите x: \n");
    scanf("%d", &x);
    const int res = x;
    printf("Начните ввод последовательности элементов.\n");
    printf("Чтобы закончить ввод последовательности, введите q\n");
    while  (scanf("%d", &x))
    {
        if (x == res)
        {
            printf("Порядковый номер первого элемента последовательности равно x: %d\n", i);
            break;
        }
        i++;
    }
    return 0;
}

// 1.2.23
int function_7(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x, i = 0, pos = 0;
    printf("Определение порядкового номера последнего элемента последовательности, равного x\n");
    printf("Введите x: \n");
    scanf("%d", &x);
    const int res = x;
    printf("Начните ввод последовательности элементов.\n");
    printf("Чтобы закончить ввод последовательности, введите q\n");
    while (scanf("%d", &x))
    {
        if (x == res)
        {
            pos = i;
            i += 1;
        }
        i++;
    }
    printf("Порядковый номер последнего элемента последовательности, равно x: %d", pos);
    return 0;
}

// 1.2.24
int function_8(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int max = -1 * power_int(10, 6);
    int min = power_int(10, 6);
    int x;
    printf("Определение максимума и минимума последовательности.\n");
    printf("Введите x: \n");
    printf("Чтобы закончить ввод последовательности, введите q\n");
    while (scanf("%d", &x))
    {
        if (x > max)
        {
            max = x;
        } else if (x < min)
        {
            min = x;
        }
    }
    printf("Получившийся min и max: %d, %d", min, max);
    return 0;
}

// 1.2.25
int function_9(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int max = -1 * power_int(10, 6);
    int pos = 0, i = 1, n;
    printf("Определение порядкового номера первого числа равного максимуму.\n");
    printf("Введите n: \n");
    printf("Чтобы закончить ввод последовательности, введите q\n");
    while (scanf("%d", &n))
    {
        if (n > max)
        {
            max = n;
            pos = i;
        }
        i++;
    }
    printf("Получившийся pos: %d\n", pos);
    return 0;
}

// 1.2.26
int function_10(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int min = power_int(10, 6);
    int count = 1, n;
    printf("Опрделение количества чисел, равных минимуму.\n");
    printf("Введите n: \n");
    printf("Чтобы закончить ввод последовательности, введите q\n");
    while (scanf("%d", &n))
    {
        if (n == min)
        {
            count++;
        }
        else if (n < min)
        {
            min = n;
            count = 1;
        }
    }
    printf("Количество чисел, равных минимуму: %d \n", count);

    return 0;
}

// 1.2.27
int function_11(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int min = power_int(10, 6);
    int i = 1, first_min = 1, last_min = 1, n;
    printf("Определение номера первого и последнего минимального элемента последовательности.\n");
    printf("Введите n: \n");
    printf("Чтобы закончить ввод последовательности, введите q\n");
    while (scanf("%d", &n))
    {
        if (n < min)
        {
            min = n;
            first_min = i;
            last_min = i;
            i += 1;
        }
        else if (n == min)
        {
            last_min = i;
            i += 1;
        } else
        {
            i += 1;
        }
    }
    printf("Первый и последний минимальный элемент последовательности: %d, %d", first_min, last_min);

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

    printf("Чтобы закончить ввод последовательности, введите q\n");
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

// 1.3.10
int function_13(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.3.15
int function_14(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.3.19
int function_15(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}

// 1.3.27
int function_16(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    return 0;
}