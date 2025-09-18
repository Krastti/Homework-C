#include <stdio.h>
#include <windows.h>

int example2(void)
{
    // Смена кодировки под UTF 8
    SetConsoleOutputCP(CP_UTF8);
    return 0;
}