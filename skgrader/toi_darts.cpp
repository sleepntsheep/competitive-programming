#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int score = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        double d = sqrt(x*x+ y*y);
        if (d <= 2){
            score += 5;
        } else if (d <= 4){
            score += 4;
        } else if (d <= 6){
            score += 3;
        } else if (d <= 8){
            score += 2;
        } else if (d <= 10){
            score ++;
        } else {}
    }
    printf("%d", score);
    return 0;
}