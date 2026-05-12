#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    if (r == c)
    { // sqare metrix
        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        flag = 0;
                    }
                }
            }
        }
        if (flag == 1)
        {
            printf("this is primary diognal metrix");
        }
        else
        {
            printf("this is not  a primary diagnal metrix \n");
        }
    }

    else
    {
        printf("this is not a primary diognal metrix");
    }

    return 0;
} 