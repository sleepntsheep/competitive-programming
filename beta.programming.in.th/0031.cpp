#include <iostream>
using namespace std;

int main (){
    int n, m, k;
    cin >> n >> m >> k;
    int count = 0;

    while(n != 1 || m != 1 || k != 1){
        int max = - 1;
        if (n > max) max = n;
        if (m > max) max = m;
        if (k > max) max = k;

        //cout << "Max : " << max << " ||| " << n << m << k << endl;

        if (n == max) {
            n -= (n % 2);
            if (n > 1) n /= 2;
        }
        else if (m == max) {
            m -= (m % 2);
            if (m > 1) m /= 2;
        }
        else if (k == max) {
            k -= (k % 2);
            if (k > 1) k /= 2;
        }

        count++;
    }

    cout << count;

    return 0;

    }
