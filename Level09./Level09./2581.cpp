//
//  2581.cpp
//  Level09.
//
//  Created by 박지호 on 26/09/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m, n, sum=0;
    vector<int> num;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        int check = 0;
        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                check = 1;
                break;
            }
        }
        if (check==0 && i != 1) {
            num.push_back(i);
        }
    }
    if (num.size()==0) {
        cout << "-1" << endl;
    } else {
        for (int i = 0; i < num.size(); i++) {
            sum+=num[i];
        }
        cout << sum << endl << num[0] << endl;
    }
    
    return 0;
}
