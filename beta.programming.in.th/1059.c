#include <stdio.h>

int main() {
    char a[9][4] = {
        {'0'},
        {'A', 'B', 'C'},
        {'D', 'E', 'F'},
        {'G', 'H', 'I'},
        {'J', 'K', 'L'},
        {'M', 'N', 'O'},
        {'P', 'Q', 'R', 'S'},
        {'T', 'U', 'V'},
        {'W', 'X', 'Y', 'Z'},
    };

    int n, s, m, in = 0;
    scanf("%d%d%d", &n, &s, &m);

    char res[n];

    if (s == 7 || s == 9){
        while (m > 4) m -= 4;}
    else {
        while (m > 3) m -= 3;}

    if (s != 0) {
        res[0] = a[s-1][m - 1];
        in++;
    }

    int y = s / 3,
        x = s % 3;
    for (int i = 0; i < n - 1; i++){
        int ox, oy, press;
        scanf("%d%d%d", &ox, &oy, &press);
        if (in < 0) in = 0;
        x += ox;
        y += oy;
        s = (y * 3 + x);
        if (s != 1 && (s == 7 || s == 9)){
            while (press > 4) press -= 4;}
        else if (s != 1){
            while (press > 3) press -= 3;}
        if (s != 1) {
            res[in] = a[s-1][press-1];
            in++; 
        }
        else{
            in -= press;
            res[in] = '\0';
        }
    } 

    if (res[0] == '\0') printf("null");
    else for (int i = 0; i < n;i++) {
        if (res[i] >= 'A' && res[i] <= 'Z') printf("%c", res[i]);
        else if( res[i] == '\0') {
            break;
        }
    }

    return 0;
}
