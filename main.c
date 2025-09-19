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
    default:
        printf("Неверный выбор\n");
        break;
    }

    return 0;
}