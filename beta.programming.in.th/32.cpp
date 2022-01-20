#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
    }
    int needtoplus = 1;
    sort(a, a+n);

    //if arr start with 0, find first element thats not 0 then swap place
    if (a[0] != 0) goto working;

    for (int b = 0; b < n; b++) {
        if (a[b] != 0) {
            a[0] = a[b];
            a[b] = 0;
        }
        break;
    }

    needtoplus = 0;

working:;

    //for (int i = 0; i < n ; i++){
        //cout <<a[i] << ' ';
    //}
    //cout << endl;

    int result = 0;
    for (int i = 0; i <n ; i++){ 
        result += a[i] * pow(10, n - i - 1);
    }


    cout << result + needtoplus;

}
