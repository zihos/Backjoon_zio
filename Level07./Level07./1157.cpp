//
//  1157.cpp
//  Level07.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<pair<int, int>> alpha;
    for (int i = 0; i < 26; i++) {
        alpha.push_back(make_pair(0, i));
    }
    for (int i = 0; i < str.length(); i++) {
        int c = str.at(i);
        if (c >= 97) {
            alpha[c-97].first++;
        }else
            alpha[c-65].first++;
    }
    
    sort(alpha.begin(), alpha.end());
    
    if (alpha[25].first == alpha[24].first) {
        cout << "?\n";
    }else
        cout << char(alpha[25].second + 65) << endl;
    return 0;
}
