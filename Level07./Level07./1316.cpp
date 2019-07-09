//
//  1316.cpp
//  Level07.
//
//  Created by 박지호 on 08/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<char> check;
        string str;
        int over = 0, group = 1;    //중복 체크, 그룹 체크
        cin >> str;
        char c = str.at(0);
        check.push_back(c);
        for (int j = 1; j < str.length(); j++) {
            c = str.at(j);
            if (c != check[check.size()-1]) {
                for (int k = 0; k < check.size(); k++) {
                    if (c == check[k]) {
                        over = 1;
                        group = 0;
                        break;
                    }
                }
                if (over == 0) {
                    check.push_back(c);
                }
            }
        }
        //그룹 단어인 경우만 count
        if (group == 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
