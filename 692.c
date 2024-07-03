#include <stdio.h>
#define swap(a, b)        \
    {                     \
        if (a < b)        \
            ;             \
                          \
        else              \
        {                 \
            int temp = a; \
            a = b;        \
            b = temp;     \
        }                 \
    }
int modeach(int a, int b)
{
    return ((a % b > b % a) ? a % b : b % a);
}
int max(int a, int b, int c)
{
    int biggest = -1;
    biggest = ((biggest > modeach(a, b)) ? biggest : modeach(a, b));
    biggest = ((biggest > modeach(b, c)) ? biggest : modeach(b, c));
    biggest = ((biggest > modeach(a, c)) ? biggest : modeach(a, c));
    return biggest;
}

int main()
{
    int m, M;
    int mod3 = 0, mod4 = 0, mod5but2 = 0;
    scanf("%d%d", &m, &M);
    swap(m, M);
    for (int i = m; i <= M; i++)
    {
        if (i % 3 == 0)
        {
            mod3++;
        }
        if (i % 4 == 0)
        {
            mod4++;
        }
        if (i % 5 == 0 && i % 2 != 0)
        {
            mod5but2++;
        }
    }
    printf("%d %d %d\n%d ", mod3, mod4, mod5but2, max(mod3, mod4, mod5but2));
    return 0;
}