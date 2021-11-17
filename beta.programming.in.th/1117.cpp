#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][2],
        r = 0,
        ee = 0,
        nsc = 0;
    for (int i = 0 ; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }

    int pp[n];

    for (int i = 0; i < n; i++){
        if (a[i][1] >= 2 * a[i][0]){
            r += a[i][1] - 2 * a[i][0];
        }
        else {
            nsc++;
            pp[i] = a[i][1] - 2*a[i][0];
        }
    }

    int ppp[nsc];
    for (int i = 0 ; i < nsc; i++){
        ppp[i] = pp[i];
    }

    sort(ppp, ppp+nsc, greater<int>());

    int  nn = nsc;

    for (int i = 0; i < nsc; i++){
        if (nn*nn - (nn-1)*(nn-1) < ppp[i]){
            r += ppp[i];
        } else{
            ee++;
            nn--;
        }
    }

    r -= ee*ee;

    cout << r;
}
