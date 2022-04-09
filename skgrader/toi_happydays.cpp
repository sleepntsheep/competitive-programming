#include <stdio.h>

int main()
{
    int n;     // number of days
    int c = 0; //count of happy day
    int h, oh; //hap and old happiness
    scanf("%d", &n);
    int ha[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h);
        ha[i] = h;
        /*if (h >= 20){
            if (h >= 80){
                c++;
            }
            else if (h - oh >= 10){
                c++;
            }
        }*/
        /*if (h >= 80)
        {
            c++;
        } else if (h >= 20 && h - oh >= 10){
            c++;
        }*/
    }
    for (int i = 0; i < n; i++)
    {
        h = ha[i];
        if (i > 0)
        {
            oh = ha[i - 1];
        }
        else
        {
            oh = h;
        }
        if (h >= 20)
        {
            if (h >= 80)
            {
                c++;
            }
            else if (h - oh >= 10)
            {
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
}