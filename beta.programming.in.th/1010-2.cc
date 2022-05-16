#include <iostream>
using namespace std;

int main() {
    int m, n ;
    cin >> m >> n;
    string a[m];

    for (int i = 0; i < m; i++){
        string b;
        cin >> b;
        for (int j = 0; j < n; j++){
            b[j] = tolower(b[j]);
        }
        a[i] = b;
    }

    int k;
    cin >> k;
    string op[k];

    int result[k][2];

    for (int i = 0; i < k; i++){
        cin >> op[i];
        for (int j = 0; j < n; j++) op[i][j] = tolower(op[i][j]);
        result[i][0] = -1;
        result[i][1] = -1;
    }


    for (int i = 0; i < k; i++){
        if (result[i][0] != -1 ){
            continue;
        }

        int midwidth = op[i].length() / 2 + op[i] % 2;
        for (int y = op[i].length() - 1; y < m; y++){
            for (int x = midwidth; x < n - midwidth; x++){
                int z, found;
                z = 0,
                  found = 1;

                while (z){
                    if (op[i][z] != a[y][x-z]){
                        found = 0;
                        break;
                    }
                    z++;
                }



                /*while (z < op[i].length())I{
                    if (op[i][z] != a[y][x-z]){
                        found = 0;
                        break;
                    } 
                    z++;
                }
                if (found){
                    result[i][0] =x;
                    result[i][1] =y;
                    continue;
                }
                */

            }
        }

    for (int i = 0; i < k; i++) {
        cout << result[i][1] << ' ' << result[i][0] << endl;
    }

}
