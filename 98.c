#include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n % 2 == 0 && n % 3 != 0 && n % 5 != 0)
//     {
//         printf("Nice");
//     }
//     else if (n % 3 == 0 && n % 2 != 0 && n % 5 != 0)
//     {
//         printf("Good");
//     }
//     else if (n % 3 != 0 && n % 2 != 0 && n % 5 == 0)
//     {
//         printf("Best");
//     }
//     else
//     {
//         printf("Bad");
//     }
//     return 0;
// }
int main()
{
    float score;
    char grade;
    scanf("%f", &score);

    switch ((int)score / 10)
    {
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'E';
        break;
    }
    printf("%.2f %c", score, grade);
    return 0;
}