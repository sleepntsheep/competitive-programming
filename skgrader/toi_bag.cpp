#include <stdio.h>

int main(){
    int n; //produc count
    int m; //max weight per bag
    int c = 0; // used bag count
    scanf("%d%d", &n, &m);
    int r = m; // remaining bag weight
    int w; // produc weight
    for (int i = 1; i <= n; i++){
        scanf("%d", &w);
        if (r >= w){
            r -= w;
        } else {
            r = m - w;
            c++;
        }
    }
    printf("%d", c+1);
    return 0;
}