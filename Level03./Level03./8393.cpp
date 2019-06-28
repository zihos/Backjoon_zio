//
//  8393.cpp
//  Level03.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum +=i;
    }
    cout << sum << endl;
    return 0;
}
