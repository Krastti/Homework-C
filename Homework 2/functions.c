#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

// Функция для генерации случайного размера массива
int generate_random_size()
{
    srand(time(NULL));
    int size = 10 + rand() % 20;
    return size;
}

// Функция для генерации вещественного случайного массива
double* generate_random_array(int size, double min_val, double max_val) {
    if (size <= 0) return NULL;

    double* arr = (double*)malloc(size * sizeof(double));
    if (arr == NULL) return NULL;

    // Инициализация генератора случайных чисел
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        // Генерация случайного числа в заданном диапазоне
        double random_value = ((double)rand() / RAND_MAX) * (max_val - min_val) + min_val;
        arr[i] = random_value;
    }
    return arr;
}

// Функция для генерации целочисленного случайного массива
int* generate_int_random_array(int size, int min_val, int max_val)
{
    if (size <= 0) return NULL;

    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) return NULL;

    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        int random_value = rand() % (max_val - min_val + 1) + min_val;
        arr[i] = random_value;
    }
    return arr;
}



// 1.3.10
int function_13(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int size = generate_random_size();
    const double min_val = 1.0;
    const double max_val = 50.0;

    double* arr = generate_random_array(size, min_val, max_val);

    printf("Первозданный массив: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%lf, %d\n", arr[i], i);
    }
    printf("\n");

    double pred = arr[0];
    for (int i = 1; i < size - 1; i++)
    {
        const int current = arr[i];

        arr[i] = (pred + arr[i]) / 2;
        pred = current;
    }
    printf("Изменённый массив: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%lf, %d\n", arr[i], i);
    }
    free(arr);

    return 0;
}

// 1.3.15
int function_14(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int size = generate_random_size();
    const int min_val = 1;
    const int max_val = 50;

    int* arr_1 = generate_int_random_array(size, min_val, max_val);
    Sleep(1000);
    int* arr_2 = generate_int_random_array(size, min_val, max_val);
    int* arr_3 = (int*)malloc(size * sizeof(int));

    int res = 0;

    printf("Первый массив: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    printf("Второй массив: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr_2[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr_1[i] == arr_2[j])
            {
                int already_added = 0;
                for (int k = 0; k < res; k++)
                {
                    if (arr_3[k] == arr_1[i])
                    {
                        already_added = 1;
                        break;
                    }
                }

                if (!already_added)
                {
                    arr_3[res] = arr_1[i];
                    res += 1;
                }
                break;
            }
        }
    }

    printf("Пересечение массивов (длина = %d): ", res);
    for (int i = 0; i < res; i++)
    {
        printf("%d ", arr_3[i]);
    }
    printf("\n");

    free(arr_1);
    free(arr_2);
    free(arr_3);

    return 0;
}

// 1.3.19
int function_15(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int size = generate_random_size();
    const double min_val = 1.0;
    const double max_val = 50.0;

    int* arr = generate_int_random_array(size, min_val, max_val);

    printf("Первозданный массив: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int actual_index = 1;

    int flag;

    for (int i = 1; i < size; i++)
    {
        flag = 0;
        for (int j = 0; j < actual_index; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            arr[actual_index] = arr[i];
            actual_index += 1;
        }
    }
    printf("Уплотненный массив: ");
    for (int i = 0; i < actual_index; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

// 1.3.27
int function_16(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int N;
    printf("Введите степень N для треугольника: ");
    scanf("%d", &N);

    int* trig = (int*)malloc((N + 1) * sizeof(int));

    trig[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        trig[i] = 0;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j > 0; j--)
        {
            trig[j] += trig[j - 1];
        }
    }

    for (int i = 0; i <= N; i++)
    {
        printf("%d ", trig[i]);
    }
    printf("\n");
    free(trig);
    return 0;
}

// Quick sorted - алгоритм быстрой сортировки
// Swap - функция обмена двух переменных
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition - функция для разделения массива
int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = (left - 1);

    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return i + 1;
}

void quick_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pi = partition(arr, left, right);

        quick_sort(arr, left, pi - 1);
        quick_sort(arr, pi + 1, right);
    }
}

int qu_sort()
{
    int size;
    printf("Введите размер сортируемого массива:\n");
    scanf("%d", &size);

    const int min_val = 1;
    const int max_val = 50000;

    int* arr = generate_int_random_array(size, min_val, max_val);

    /*
    printf("Исходный массив:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    */
    clock_t begin = clock();

    quick_sort(arr, 0, size - 1);

    clock_t end = clock();
    /*
    printf("Отсортированный массив\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    */
    free(arr);

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Время выполнения: %.10f секунд\n", time_spent);
    return 0;
}