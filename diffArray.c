#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    int i, j;
    for (i = 0; i < testcase; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // COPYING OF a array
        for (i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        // Ascending the elements in b array
        for (i = 0; i < n - 1; i++)
        {
            for (j = n - 1; j > 0; j--)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
        printf("\n");
        // SUBTRACTION in c:
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i] = abs(a[i] - b[i]));
        }
        printf("\n");
    }
    return 0;
}
