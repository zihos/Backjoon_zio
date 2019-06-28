//
//  2753.cpp
//  Level02.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n % 4 == 0) {
        if(n % 100 != 0 | n % 400 == 0)
            cout << "1"<<endl;
        else cout << "0" <<endl;
    }else cout << "0"<<endl;
    return 0;
}
