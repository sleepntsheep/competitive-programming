#include <iostream>
using namespace std;

int main() {
    int k, m;
    cin >> k;
    int type[k][2];
    double priceper[k];
    int used[k] = { 0 };
    for (int i = 0; i < k; i++) cin >> type[i][0] >> type[i][1];
    cin >> m;
    int kilo[m]; 
    double result[m] = { 0 };
    for (int i = 0; i < m; i++) cin >> kilo[i];
    for (int i = 0; i < m; i++) priceper[k] = type[i][0] / type[i][1];

    int zz  = 0 ;
    for (int i = 0; i < m; i++) {
        int min = k;
        int jj;
        for (int j = 0; j < k; j++){
            if (priceper[j] < min && type[j][0] != 0) {
                used[j] = 1;
                min = priceper[j];
                if (!zz) jj = j;
            }
        }
        if (kilo[i] > type[jj][0]) {
            type[jj][0] -= kilo[i];
            result[i] += kilo[i] * priceper[jj];
        } else {
            kilo[i] -= type[jj][0];
            result[i] += type[jj][0] * priceper[jj];
            type[jj][0] == 0;
            i--;
            zz == 1;
            continue;
        }
    }

    for (int i = 0; i < m; i++){
        cout << result[i] << endl;
    }
    
}
