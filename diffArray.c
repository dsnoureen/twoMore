#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
