#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int state[10001] = { 0 };
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        state[a]++;
    };

    int result[1000];
    int result_index = 0;

    int max = -1;
    for (int i = 0; i < 10000; i++){
        if (state[i] < max) continue;
        else if (state[i] == max) {
            result_index += 1;
            result[result_index] = i;
        }
        else if (state[i] > max){
            max = state[i];
            result_index = 0;
            result[result_index] = i;
            for (int j = 1; j < 1000; j++) result[j] = 0;
        }
    }

    sort(result, result+1000);

    for (int i = 0; i < 1000; i++){
        if (result[i] > 0)
            cout << result[i] << ' ';
    }

    return 0;
}


