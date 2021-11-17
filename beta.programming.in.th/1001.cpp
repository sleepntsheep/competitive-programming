#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string all[n];
    int obstruct[m];

    for (int i = 0; i < n; i++){
        cin >> all[i];
    }

    for (int i = 0; i < m; i++){
        cin >> obstruct[i];
    }

    for (int i = 0; i < m; i++) {
        if (obstruct[i] == 0) continue;
        for (int t = 0; t < obstruct[i]; t++){
            for (int j = 0; j < n; j++){
                if (j == n - 1) {
                    all[j][i] = '#';
                    break;
                }
                else if (all[j][i] == 'O'){
                    break;
                }
                else if (all[j+1][i] == 'O' || all[j+1][i] == '#'){
                    all[j].replace(i, 1, "#");
                    break;
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        cout << all[i] << endl;
    }
}
