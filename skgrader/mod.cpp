#include <iostream>

int main() {
    /*int r[15];
    int count = 0;
    int found = 0; 
    for (int i = 0; i < 15; i++){
        int x, z;
        scanf("%d", &x);
        z = x % 37;
        for (int j = 0; j < 15; j++){
            if (z == r[j]){
                found = 1;
                break;
            }
        }
        if (found == 0){
            r[i] = z;
            count += 1;
        } 
        if (found == 1) {
            found = 0;
        }
    }
    printf("%d", count);
    return 0;*/
    int r[37];
    int ns[15];
    int count = 0;
    for (int i = 0; i < 37; i++){
        r[i] = 0;
    }
    for (int i = 0; i < 15; i++){
        int x, z;
        std::cin >> x;
        z = x%37;
        ns[i] = z;
    }
    for (int i = 0; i < 15; i++){
        int z;
        z = ns[i];
        r[z] = 1;
    }
    for (int i = 0; i < 37; i++){
        if (r[i] == 1){
            count++;
        }
    }
    //printf("%d", count);
    std::cout << count;
}