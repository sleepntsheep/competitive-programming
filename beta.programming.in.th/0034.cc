#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    //check if no sol
    if (B * B - 4 * A * C < 0)
       {cout << "No Solution"; return 0;}

    int result[1000][4];
    int result_index = 0;

    for (int a = 1; a <= A + 5000; a++) {
        for (int c = 1; c <= B + 5000; c++){
            if (a * c != A) continue;
            for (int b = -1500; b <= A - a + 1500; b++) {
                for (int d = -1500; d <= B - b + 1500; d++){
                    if (a * d + b * c != B || b * d != C) continue;
                    result[result_index][0] = a;
                    result[result_index][1] = b;
                    result[result_index][2] = c;
                    result[result_index][3] = d;
                    result_index++;
            }}

        }
    }

    int result_final[4];

    if (result_index > 1){
        int mina = 100000, minb = 1000001, ii = -1;
        for (int ir = 0 ; ir < result_index - 1; ir++){
            if (result[ir][0] < mina) mina = result[ir][0];
            else continue;
            if (result[ir][1] < minb) minb = result[ir][1];
            else continue;
            result_final[0] = mina;
            result_final[1] = minb;
            result_final[2] = result[ir][2];
            result_final[3] = result[ir][3];
        }
    }
    else {
        for (int z = 0; z < 4; z++){
            result_final[z] = result[0][z];
        }
    }

    if (result_final[0] == 0)
    {
        cout << "No Solution" << endl;
        return 0 ;
    }

    for (int i = 0; i < 4; i++){
        cout << result_final[i] << ' ';
    }
}
