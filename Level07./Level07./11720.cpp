//
//  11720.cpp
//  Level07.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    string str;
    cin >> str;
    vector<int> number;
    for (int i = 0; i < str.length(); i++) {
        number.push_back(str.at(i)-48);
    }
    for (int i = 0; i < number.size(); i++) {
        sum+=number[i];
    }
    cout << sum << endl;
    return 0;
}
