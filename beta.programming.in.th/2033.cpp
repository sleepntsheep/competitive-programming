#include <iostream>
using namespace std;

int main(){
    int n,
        t,
        p,
        k = 0;
    cin >> n >> t >> p;
    int data[n][t],
    count[n] = { 0 }, // count of task finished of a player
    point[t] = { 0 },
    score[n] = { 0 };

    for (int i = 0; i < n; i++){
        for (int j = 0; j < t; j++){
            cin >> data[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < t; j++){
            if (data[i][j] == 0) {
                point[j]++;
            }
            count[i] += data[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < t; j++){
            score[i] += data[i][j] * point[j];
        }
    }

    for (int i = 0; i < n; i++){
        if (score[p-1] < score[i]) k++;
        else if (score[p-1] == score[i]) {
            if (count[p-1] < count[i]) k++;
            else if (count[p-1] == count[i]) {
                if (p - 1 > i) k++;
            }
        }
    }

    /*    cout << "Score ";
    for (int i = 0;  i < n; i++ ) {
    cout << score[i];
    }
    cout << "count ";
    for (int i = 0;  i < n; i++ ) {
    cout << count[i];
    }
    cout << "Point ";
    for (int i = 0;  i < t; i++ ) {
    cout << point[i] << endl;
    }
    */

    cout << score[p-1] << ' ' << k + 1;

    return 0 ;
}
