//
//  2675.cpp
//  Level07.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int t, r;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> r >> s;
        for (int j = 0; j < s.length(); j++) {
            for (int k = 0; k < r; k++) {
                cout << s.at(j);
            }
        }
        cout << endl;
    }
    return 0;
}
