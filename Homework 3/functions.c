#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int function_17(void) // Задание 1
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int N;
    printf("Введите N: ");
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    if (arr != NULL)
    {
        int *ptr = arr; // В данном случае мы ставим указатель на первый элемент массива
        for (int i = 0, n; i < N; i++, ptr++)
        {
            scanf("%d", &n);
            *ptr = n;
        }
        printf("Обратный массив: \n");
        int *end = arr + N - 1;
        for (int i = 0; i < N; i++, end--)
        {
            printf("%d ", *end);
        }
    }
    free(arr);

    return 0;
}

int function_18(void) // Задание 2
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int N;
    printf("Введите N: ");
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    if (arr != NULL)
    {
        int *ptr = arr;
        for (int i = 0, n; i < N; i++, ptr++)
        {
            scanf("%d", &n);
            *ptr = n;
        }
        ptr = arr;
        int min_val = *ptr, max_val = *ptr;
        for (int i = 0; i < N; i++, ptr++)
        {
            if (*ptr < min_val)
            {
                min_val = *ptr;
            }
            if (*ptr > max_val)
            {
                max_val = *ptr;
            }
        }

        printf("Минимальное значение массива: %d\n", min_val);
        printf("Максимальное значение массива: %d\n", max_val);
    }
    free(arr);
    return 0;
}

int function_19(void) // Задание 3
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int N;
    printf("Введите N: ");
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    if (arr != NULL)
    {
        int *ptr = arr;
        for (int i = 0; i < N; i++, ptr++)
        {
            scanf("%d", ptr);
        }

        ptr = arr;
        int sum = 0;
        for (int i = 1; i <= N; i++, ptr++)
        {
            sum += *ptr; // Находим сумму
        }
        double avg_sum = (double)sum / N; // Находим среднее арифметическое
        ptr = arr; // После окончания массива указатель должен снова указывать на начало
        printf("Сумма последовательности: %d\n", sum);
        printf("Среднее арифметическое последовательности: %.2f\n", avg_sum);
    }
    free(arr);
    return 0;
}

int function_20(void) // Задание 4
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int N;
    printf("Введите N: ");
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    int* arr_2 = (int*)malloc(N * sizeof(int));
    if (arr != NULL)
    {
        int *ptr = arr;
        int *ptr_2 = arr_2;
        for (int i = 0, n; i < N; i++, ptr++, ptr_2++)
        {
            scanf("%d", &n);
            *ptr = n;
            n *= n;
            *ptr_2 = n;
        }
        ptr = arr;
        printf("Исходный массив: ");
        for (int i = 0; i < N; i++, ptr++)
        {
            printf("%d ", *ptr);
        }
        printf("\n");
        ptr_2 = arr_2;
        printf("Возведённый в квадрат: ");
        for (int i = 0; i < N; i++, ptr_2++)
        {
            printf("%d ", *ptr_2);
        }
    }
    free(arr);
    free(arr_2);
    return 0;
}

int function_21(void) // Задание 5
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int N;
    printf("Введите N: ");
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    int* arr_2 = (int*)malloc(N * sizeof(int));
    if (arr != NULL)
    {
        int *ptr = arr;
        int *ptr_2 = arr_2;
        int k = 0;
        for (int i = 0, n; i < N; i++, ptr++)
        {
            scanf("%d", ptr);
            if (*ptr != 0)
            {
                *ptr_2 = *ptr;
                ptr_2++;
                k++;
            }
        }

        ptr = arr;
        printf("Исходный массив: ");
        for (int i = 0; i < N; i++, ptr++)
        {
            printf("%d ", *ptr);
        }
        printf("\n");
        ptr_2 = arr_2;
        printf("Не нулевой массив: ");
        for (int i = 0; i < k; i++, ptr_2++)
        {
            printf("%d ", *ptr_2);
        }
    }
    free(arr);
    free(arr_2);
    return 0;
}

void swap_any(void* a, void* b, size_t size) // Задание 6
{
    void* swap = malloc(size);
    if (swap != NULL)
    {
        memcpy(swap, a, size);
        memcpy(a, b, size);
        memcpy(b, swap, size);
    }
    free(swap);
}