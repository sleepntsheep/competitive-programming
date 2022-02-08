#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    int all[n][n];
    int state[n][n] = { 0 };

    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++){
            cin >> all[i][j];
        }
    }

    int undone = 1;
    int time = 0;
    int r = 0 ;
    state[0][0] = 1;
    while (undone) {
        time++;
        undone = 0;
        int max = 0;
        int k[n][2];
        int t = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0 ; j < n; j++){
                if (state[i][j]){
                    t++;
                    k[t][0] = i;
                    k[t][1] = j;
                }
            }
        }

        for (int u = 0 ; u < t; u++){
            int i = k[i][0];
            int j = k[i][1];
            if (state[i][j]){
                if (i < n - 1 && j < n - 1){
                    if (!state[i+1][j+1] && all[i+1][j+1] > max) max = all[i+1][j+1]; 
                }
                if (i < n - 1){
                    if (!state[i+1][j] && all[i+1][j] > max) max = all[i+1][j]; 
                }
                if (j < n - 1){
                    if (!state[i][j+1] && all[i][j+1] > max) max = all[i][j+1]; 
                }
                if (i > 0 && j > 0){
                    if (!state[i-1][j-1] && all[i-1][j-1] > max) max = all[i-1][j-1]; 
                }
                if (i > 0){
                    if (!state[i-1][j] && all[i-1][j] > max) max = all[i-1][j]; 
                }
                if (j > 0){
                    if (!state[j-1][j] && all[j-1][j] > max) max = all[j-1][j]; 
                }
                if (i > 0 && j < n - 1) {
                    if (!state[i-1][j+1] && all[i-1][j+1] > max) max = all[i-1][j+1];
                }
                if (i < n -1  && j > 0 ) {
                    if (!state[i+1][j-1] && all[i+1][j-1] > max) max = all[i+1][j-1];
                }
            }

        }

        for (int u = 0 ; u < t;u++){
            int i = k[i][0];
            int j = k[i][1];

            if (state[i][j]) {
                for (int o = -1; o <= 1; o++){
                    for (int p = -1; p <= 1; p++){
                        state[o][p] = 1;
                    }
                }
            }  
        }

        for (int i = 0 ; i < n; i++){
            for (int  j=  0; j  <n ;j++){
                if (0 == state[i][j]) undone = 1;
            }
        }

        for (int i = 0 ; i < n; i++){
            for (int  j=  0; j  <n ;j++){
                cout << state[i][j];
            }
            cout << endl;
        }

        r += max;
    }
    cout << r;
}
