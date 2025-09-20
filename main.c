#include <stdio.h>
#include <windows.h>
#include "functions.h"

int main(void)
{
    // Смена кодировки под UTF 8
    SetConsoleOutputCP(CP_UTF8);

    int var;
    printf("Выберите функцию, которую вы хотите выполнить\n");
    printf("\t 1 - 1.2.1\n");
    printf("\t 2 - 1.2.4\n");
    printf("\t 3 - 1.2.5\n");
    printf("\t 4 - 1.2.8\n");
    printf("\t 5 - 1.2.21\n");
    printf("\t 6 - 1.2.22\n");
    printf("\t 7 - 1.2.23\n");
    printf("\t 8 - 1.2.24\n");
    printf("\t 9 - 1.2.25\n");
    printf("\t 10 - 1.2.26\n");
    printf("\t 11 - 1.2.27\n");
    printf("\t 12 - 1.2.43\n");
    printf("Выбор функции: ");
    scanf("%d", &var);

    switch (var)
    {
    case 1:
        function_1();
        break;
    case 2:
        function_2();
        break;
    case 3:
        function_3();
        break;
    case 4:
        function_4();
        break;
    case 5:
        function_5();
        break;
    case 6:
        function_6();
        break;
    case 7:
        function_7();
        break;
    case 8:
        function_8();
        break;
    case 9:
        function_9();
        break;
    case 10:
        function_10();
        break;
    case 11:
        function_11();
        break;
    case 12:
        function_12();
        break;
    default:
        printf("Неверный выбор\n");
        break;
    }

    return 0;
}