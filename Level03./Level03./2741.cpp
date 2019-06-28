//
//  main.cpp
//  Level03.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    if (N <= 100000) {
        for (int i = 1; i<= N; i++) {
            cout << i <<"\n";
        }
    }
    return 0;
}
