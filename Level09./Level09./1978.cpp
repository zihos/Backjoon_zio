//
//  1978.cpp
//  Level09.
//
//  Created by 박지호 on 26/09/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int t, count = 0;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, check = 0;
        cin >> n;
        for (int j = 2; j < n; j++) {
            if (n%j == 0) {
                check = 1;
                break;
            }
        }
        if (check == 0 && n != 1) {
            count++;
        }
    }

    cout << count <<endl;
    return 0;
}
