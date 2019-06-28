//
//  2439.cpp
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
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << " ";
        }
        for (int k = 0; k<i; k++) {
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}
