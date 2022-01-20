#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int use[10] = { 0 };
    
    for (int plate = start; plate <= end; plate++) {
        int e = plate;
        int d;
        while (e != 0) {
            d = e % 10;
            e /= 10;
            use[d]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << i << " -> " << use[i] << '\n';
    }

}
