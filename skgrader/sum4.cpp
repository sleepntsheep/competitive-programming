#include <stdio.h>

int main(){
    int a[40002], z, s = 0;
    bool triggered = false;
    while (scanf("%d", &z) == 1)
    {
        s += z;
        if (a[s + 20000] == 1){
            printf("%d", s);
            triggered = true;
            return 0;
        } else {
            triggered = false;
            a[s + 20000] = 1;
        }
    }
    if (triggered == false) {
        printf("no");
    }
    return 0;
}