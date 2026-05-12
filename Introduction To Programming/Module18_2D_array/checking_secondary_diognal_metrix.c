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
                if (i + j == r- 1)
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
            printf("this is secondary diognal metrix");
        }
        else
        {
            printf("this is not  a secondary diagnal metrix \n");
        }
    }

    else
    {
        printf("this is not a secondary diognal metrix");
    }

    return 0;
} 