//
//  2577.cpp
//  Level05.
//
//  Created by 박지호 on 03/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};
    int a, b, c, mux, mol;
    cin >> a >> b >> c;
    mux = a * b * c;
    //counting
    while (mux > 0) {
        mol = mux % 10;
        arr[mol]++;
        mux = mux / 10;
    }
    //print
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}
