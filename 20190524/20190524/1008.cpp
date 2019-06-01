//
//  1008.cpp
//  20190524
//
//  Created by 박지호 on 24/05/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    if (0 < A && B < 10) {
        cout.precision(10);
        cout << (double)A / B << endl;
    }
    return 0;
}
