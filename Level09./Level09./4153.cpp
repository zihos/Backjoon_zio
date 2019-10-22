//
//  4153.cpp
//  Level09.
//
//  Created by 박지호 on 03/10/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    while (1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        vector<int> squared;
        squared.push_back(a*a);
        squared.push_back(b*b);
        squared.push_back(c*c);
        sort(squared.begin(), squared.end());
        if (squared[0]+squared[1] == squared[2]) {
            cout << "right" << endl;
        }
        else
            cout << "wrong" << endl;
    }
    
    return 0;
}
