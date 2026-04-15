#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int min, max;

        if (x < y)
        {
            min = x;
            max = y;
        }
        else
        {
            min = y;
            max = x;
        }

        int sum = 0;

        for (int i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}