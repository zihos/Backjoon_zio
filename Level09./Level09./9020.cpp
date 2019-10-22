//
//  9020.cpp
//  Level09.
//
//  Created by 박지호 on 21/10/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    //Eratos--------------------------------------
    bool *PrimeArray = new bool[10001];
    for (int i = 2; i <= 10000; i++) {
        PrimeArray[i] = true;
    }
    for (int i = 2; i*i <= 10000; i++) {
        if (PrimeArray[i]) {
            for (int j = i*i; j <= 10000; j+=i) {
                PrimeArray[j] = false;
            }
        }
    }
    //--------------------------------------------
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int evenNum;
        cin >> evenNum;
        int small = evenNum/2, big;
        while (small > 0) {
            big = evenNum - small;
            if (PrimeArray[small] == true && PrimeArray[big] == true) {
                cout << small << " " << big <<"\n";
                break;
            }else
                small--;
        }
    }
    
    return 0;
}
