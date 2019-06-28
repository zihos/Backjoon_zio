//
//  2441.cpp
//  Level03.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i <n; i++) {
        for (int k = 0; k<i; k++) {
            cout << " ";
        }
        for (int j = n-i; j>0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

