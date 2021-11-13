#include <iostream>

using namespace std;
int main(){
    int n, m;
    cin >> n;
    cin >> m;
    char a[n];
    char b[m];
    cin >> a;
    cin >> b;
    int c = 0;

    for (int i = 0; i <= m - n; i++) {
        char permu_b[n];
        for (int j = 0; j < n; j++) {
            permu_b[j] = b[i+j];
        }
        for (int j = 0; j < n; j++) {
            int not_found = 1;
            for (int l = 0; l < n ; l++) {
                if (a[l] == permu_b[j]){
                    not_found = 0;
                    break;
                }
                else not_found = 1;
            }
            if (not_found) goto notfound;
        }
        c++;
        notfound: ;
    }
    printf("%d", c);
}