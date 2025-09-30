#include <stdio.h>
#include <windows.h>
#include "homework.h"

int main(void)
{
    // Смена кодировки под UTF 8
    SetConsoleOutputCP(CP_UTF8);

    int var;
    printf("Выберите домашнюю работу:\n");
    printf("\t 1 - Домашняя работа 1\n");
    printf("Выбор домашней работы: ");
    scanf("%d", &var);

    switch (var)
    {
    case 1:
        homework_1();
        break;
    default:
        printf("Неверный выбор\n");
        break;
    }
    return 0;
}