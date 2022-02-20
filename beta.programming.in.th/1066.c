#include <stdio.h>

int abs(int n) {
    return n + (n > 0) * 2 * n;
}

int arlen(int *arr) {
    int i = 0;
    while (arr[i] != 0) {
        i++;
    }
    return i - 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int m[n];
    int l = n;
    int r = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);
    while (arlen(m) > 1)
    {
        int max = 0;
        int maxi = 0;
        int maxr = 0;
        for (int i = 0; i < l - 1; i++)
        {
            if (max < abs(m[i + 1] - m[i]))
            {
                max = abs(m[i + 1] - m[i]);
                maxi = i;
                maxr = m[i];
            }
            // else if (max == abs(m[i + 1] - m[i]))
            // {
            //     if (m[i] < maxr)
            //     {
            //         maxr = m[i];
            //         maxi = i;
            //     }
            // }
        }
        // printf("| %d %d | Max = %d  | Strlen = %d\n", m[maxi], m[maxi+1], max, arlen(m));
        // for (int i = 0 ;i < l; i++) {
            // printf("%d", m[i]);
        // }
        // printf("\n");
        r += max;
        for (int i = maxi; i < l - 2; i++)
            m[i] = m[i+2];
        m[l-1] = 0;
        m[l] = 0;
        l -= 2;
    }
    printf("%d", r);
}