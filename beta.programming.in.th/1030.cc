#include <iostream>
#include <algorithm>
using namespace std;
#define pii pair<int, int>
#define tif pair<pii, double>
#define st first
#define nd second
#define stt st.st
#define ndd st.nd
#define rd nd

bool compare(tif a, tif b) {
    return (a.rd < b.rd);
}

int main() {
    int k, m;
    cin >> k;
    
    tif ri[k];
    for (int i =0 ;i < k; i++) {
        cin >> ri[i].stt >> ri[i].ndd;
        ri[i].rd = (double)ri[i].stt / (double)ri[i].ndd;
    }
    cin >> m;
    sort(ri, ri+k, compare);
    int z;
    int i = 0;
    while(m--) {
        double p = 0;
        z = 0;
        cin >> z;
        while (z > 0) {
            if (z < ri[i].ndd) {
                ri[i].ndd -= z;
                p += z * ri[i].rd;
                z = 0;
            }
            else {
                z -= ri[i].ndd;
                p += ri[i].ndd * ri[i].rd;
                ri[i].ndd = 0;
                i++;
            }
        }
        printf("%.3lf\n", p);
    } 
    
       
    
}
