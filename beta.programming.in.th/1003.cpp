#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n; 
    cin >> n;
    int foundres = 0;
    //set<int , greater<int> > res;

    int small = 6,
        mid = 9,
        large = 20;

    int small_limit = n / 6 + 1,
        mid_limit = n / 9 + 1,
        large_limit = n / 20 + 1;

    vector<int> res = {};

    for (int a = 0; a < small_limit; a++){
        for (int b = 0; b < mid_limit; b++){
            for (int c = 0; c < large_limit; c++){
                int result = 0;

                result += small * a + mid * b + large * c;
                if (result <= n && result != 0) {


                    if (binary_search(res.begin(), res.end(), result)) continue;
                    res.push_back(result);
                    foundres = 1;
                }
            }
        }
    }

    vector<int>::iterator ipp;
    sort(res.begin(), res.end());
    res.erase( unique(res.begin(), res.end()), res.end() );
    
    for (auto it = res.begin(); it != res.end(); ++it){
        cout << *it << endl;
    }

    if (!foundres) cout << "no";
}
