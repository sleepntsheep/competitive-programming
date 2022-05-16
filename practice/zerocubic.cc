#include  <bits/stdc++.h>
using namespace std;

double a, b, c, d;
double f(double x) {
    return a * x * x * x + b * x * x + c * x + d;
}

const double err = 1e-9;

int main() {
    cin >> a >> b >> c >> d;
    // binary search
    double l = -1e9, r = 1e9;
    double mid;
    while (1) {
        mid = (l + r) / 2;
        double fmid = f(mid);
        //cout << mid << ' ' << fmid << " | " << l <<  ' ' << r << '\n'; -debug
        if (abs(fmid - 0) < err) break;
        if (a > 0) {
            if (fmid < 0) l = mid+err;
            else r = mid-err;
        }
        else {
            if (fmid < 0) r = mid-err;
            else l = mid+err;
        }
    }
    cout << fixed << setprecision(9) << mid;

    return 0;
}
