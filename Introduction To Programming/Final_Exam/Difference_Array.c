#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }

        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (b[j] > b[k])
                {
                    int temp = b[j];
                    b[j] = b[k];
                    b[k] = temp;
                }
            }
        }

        // for (int k = 0; k < n; k++)
        // {
        //     printf("%d ", a[k]);
        // }
        // printf("\n");
        // for (int k = 0; k < n; k++)
        // {
        //     printf("%d ", b[k]);
        // }
        // printf("\n");
        int c[n];


        for(int j =0; j<n; j++){
           printf("%d ", abs(a[j] - b[j]));
        }
        printf("\n");
    }
    return 0;
}