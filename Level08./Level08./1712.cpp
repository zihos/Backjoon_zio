//
//  baekjoon 1712.cpp
//  Level08.
//
//  Created by 박지호 on 09/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    //손익분기점 없는경우
    if (c-b <= 0)
        cout << -1 << endl;
    else 
        cout << a / (c-b) +1 << endl;
    
    return 0;
}
