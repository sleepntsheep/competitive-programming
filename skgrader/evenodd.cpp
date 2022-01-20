#include <stdio.h>
#include <iostream>

int main(){
    int d;
    int r[20000];
    int rc = 0;
    scanf("%d", &d);
    int rindex[d];
    for (int i = 0; i < d; i++ ){
        int c;
        scanf("%d", &c);
        rindex[i] = (i > 0) ? c+rindex[i-1] : c-1;
        int l[c];
        for (int j = 0; j < c; j++)
        {
            int x;
            scanf("%d", &x);
            l[j] = x;
        }
        for (int j = 0; j < c; j++){
            if (j%2 != 0){
                r[rc] = l[j];
                rc++;
            }
        }
        for (int j = 0; j < c; j++){
            if (j%2 == 0){
                r[rc] = l[j];
                rc++;
            }
        }
    }
    for (int i = 0; i < d; i++){
        int index = rindex[i];
        for (int j = (i > 0) ? rindex[i-1]+1 : 0; j <= index; j++){
            //printf("%d", &r[j]);
            std::cout << r[j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}