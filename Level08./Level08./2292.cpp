//
//  baekjoon 2292.cpp
//  Level08.
//
//  Created by 박지호 on 11/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n, i = 1;
    cin >> n;
    while (n > 1) {
        n -= 6*i;
        i++;
    }
    cout << i << endl;
    return 0;
}
