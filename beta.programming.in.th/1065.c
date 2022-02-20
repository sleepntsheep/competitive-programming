#include <stdio.h>

int s[1005][4]; // x1 y1 x2 y2
int t[1005][4];

int collide(int *s1, int *s2)
{
    if (s2[0] >= s1[2])
        return 0;
    if (s2[1] <= s1[3])
        return 0;
    if (s2[2] <= s1[0])
        return 0;
    if (s2[3] >= s1[1])
        return 0;
    return 1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &s[i][0], &s[i][1], &s[i][2], &s[i][3]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %d %d", &t[i][0], &t[i][1], &t[i][2], &t[i][3]);
    }
    for (int i = 0; i < m; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
            c += collide(s[j], t[i]);
        printf("%d\n", c);
    }
}