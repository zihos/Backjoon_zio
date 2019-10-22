//
//  3009.cpp
//  Level09.
//
//  Created by 박지호 on 03/10/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int x[3], y[3], a, b, rec_x, rec_y;
    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        x[i] = a;
        y[i] = b;
    }
    
    if (x[0] == x[1]) {
        rec_x = x[2];
    } else {
        if (x[0] == x[2]) {
            rec_x = x[1];
        } else {
            rec_x = x[0];
        }
    }
    
    if (y[0] == y[1]) {
        rec_y = y[2];
    } else {
        if (y[0] == y[2]) {
            rec_y = y[1];
        } else {
            rec_y = y[0];
        }
    }
    
    cout << rec_x << " " << rec_y << endl;
    
    return 0;
}
