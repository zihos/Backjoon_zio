//
//  3053.cpp
//  Level09.
//
//  Created by 박지호 on 03/10/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#define pi 3.14159265358979
using namespace std;

int main(){
    int r;
    cin >> r;
    double u = r * r * pi, t = r * r * 2;
    cout << fixed;
    cout.precision(6);
    cout << u << endl << t << endl;
    return 0;
}
