//
//  10250.cpp
//  Level08.
//
//  Created by 박지호 on 16/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int room[t];
    for (int i = 0; i < t; i++) {
        int h, w, n;
        cin >> h >> w >> n;
        int floor = 0, num = 0;
        floor = n % h;
        num = n / h + 1;
        if (floor == 0) {
            floor = h;
            num--;
        }
        room[i] = (floor * 100 + num);
    }
    for (int i = 0; i < t; i++) {
        cout << room[i] << "\n";
    }
    return 0;
}
