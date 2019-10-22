//
//  baekjoon 1011.cpp
//  Level08.
//
//  Created by 박지호 on 14/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int t, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int s, e, interval, dis = 0, k = 1;
        cin >> s >> e;
        interval = e - s;
        while (dis >= (interval-1)/2) {
            dis+= k;
            k++;
        }
        
    }
    return 0;
}
