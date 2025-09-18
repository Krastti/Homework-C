#include <stdio.h>
#include <windows.h>
#include "functions.h"

int main(void)
{
    // Смена кодировки под UTF 8
    SetConsoleOutputCP(CP_UTF8);

    int var;
    printf("Выберите функцию, которую вы хотите выполнить\n");
    printf("1 - 1.2.1\n");
    printf("2 - 1.2.4\n");
    scanf("%d", &var);

    if (var == 1)
    {
        function_1();
    }
    if (var == 2)
    {
        function_2();
    }
}