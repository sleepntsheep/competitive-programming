#include <stdio.h>
#include <math.h>

int main() {
    char s[6] = "E";
    double x = 0, y = 0;
    while (s[0] != '*') {
        scanf("%s", s);
        int l = 0;
        int z = 0;
        while (s[z] >= '0' && s[z] <= '9') {
            l *= 10;
            l += s[z] - '0';
            z++;
        }
        if (s[z+1] == 0) {
            if (s[z] == 'N') {
                y += l;
            } else if (s[z] == 'E') {
                x += l;
            } else if (s[z] == 'S') {
                y -= l;
            } else if (s[z] == 'W') {
                x -= l;
            }
        }
        else {
            double ll = l / (sqrt(2));
            if (s[z] == 'N') {
                if (s[z+1] == 'E') {
                    x += ll;
                }
                else if (s[z+1] == 'W') {
                    x -= ll;
                }
                y += ll;
            } else if (s[z] == 'S') {
                y -= ll;
                if (s[z+1] == 'E') {
                    x += ll;
                } else if (s[z+1] == 'W') {
                    x -= ll;
                }
            }
        }

    }

    double dis = sqrt(x*x+y*y);
    printf("%.3lf %.3lf\n%.3lf", x, y, dis);
}