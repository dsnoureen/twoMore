#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    int i;
    for (i = 0; i < testcase; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n], c[n], d[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // COPYING COPYING OF a array
        for (i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        // Ascending the elements in b array
        i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
                i++;
                j--;
            }
        }

        for (i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }

        // SUBTRACTION in c:
        //     for (int i = 0; i < n; i++)
        //     {
        //         printf("%d ", c[i] = abs(a[i] - b[i]));
        //     }
        //     printf("\n");
        // }
    }
    return 0;
}
