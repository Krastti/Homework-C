#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int function_17(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int N;
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

int function_18(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int N;
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