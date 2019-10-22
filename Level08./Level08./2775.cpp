//
//  2775.cpp
//  Level08.
//
//  Created by 박지호 on 16/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int t, k, n, apt[15][14] = {0};
    cin >> t;
    
    for (int i = 0; i < 14; i++) {
        apt[0][i] = i+1;    //0층 초기화
        apt[i+1][0] = 1;    //1호 초기화
    }
    //apt 초기화
    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 14; j++) {
            apt[i][j] = apt[i-1][j] + apt[i][j-1];
        }
    }
    for (int i = 0; i < t; i++) {
        cin >> k >> n;
        cout << apt[k][n-1] << endl;
    }
    return 0;
}
