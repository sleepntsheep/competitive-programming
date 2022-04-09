#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n+1];
    a[n] = -1;
    int sp = 0;
    int i, j, k, l;
    char op;
    int pri;
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &op);
        if (op == 'P')
        {
            scanf("%d", a+sp++);
        }
        else if (op == 'Q') {
            if (sp == 0)
                {
                    printf("-1\n");
                    continue;
                }
            int max = -1;
            int in = n;
            for (j = 0; j < sp; j++) {
                if (a[j] > max)
                {
                    max = a[j];
                    in = j;
                }
            }
            printf("%d\n", max);

            a[in] = a[--sp];
        }
    }

    return 0;
}
