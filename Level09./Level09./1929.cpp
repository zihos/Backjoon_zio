//
//  1929.cpp
//  Level09.
//
//  Created by 박지호 on 27/09/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;
    
    bool *PrimeArray = new bool[n+1];
    
    for (int i = 2; i <= n; i++) {
        PrimeArray[i] = true;
    }
    
    for (int i = 2; i*i <= n; i++) {
        if (PrimeArray[i]) {
            for (int j = i*i; j <= n; j+=i) {
                PrimeArray[j] = false;
            }
        }
    }
    
    for (int i = m; i <= n; i++) {
        if (PrimeArray[i] == true) {
            cout << i << "\n";
        }
    }

    return 0;
}
