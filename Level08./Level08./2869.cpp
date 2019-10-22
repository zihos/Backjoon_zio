//
//  2869.cpp
//  Level08.
//
//  Created by 박지호 on 15/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int a, b, v;
    cin >> a >> b >> v;
    if ((v-a)%(a-b) == 0) {
        cout <<(v-a)/(a-b) +1 << "\n";
    }else{
        cout << (v-b)/(a-b) +1 << "\n";
    }
    
    return 0;
}
