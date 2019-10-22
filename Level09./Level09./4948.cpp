//
//  4948.cpp
//  Level09.
//
//  Created by 박지호 on 08/10/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

void Eratos(int N){
    int n = 2*N, count = 0;
    
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
    
    for (int i = N+1; i <= n; i++) {
        if (PrimeArray[i] == true) {
            count++;
        }
    }
    cout << count << "\n";
}

int main(){
    while (1) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        Eratos(n);
    }
    
    return 0;
}
