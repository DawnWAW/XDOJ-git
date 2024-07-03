#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
// #include <stdio.h>
// #include <wchar.h>
// int main()
//{
//     int n;
//     scanf_s("%d", &n);
//     wchar_t s1[] = L"????\0";
//     wchar_t s2[] = L"???\0";
//     if (n % 2 == 0)
//     {
//         wprintf(L"%ls", s2);
//     }
//     else
//     {
//         wprintf(L"%ls", s1);
//     }
//     return 0;
// }
