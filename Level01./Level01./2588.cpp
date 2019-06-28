//
//  2588.cpp
//  Level01.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int arr[3] = {b%10, (b/10)%10, b/100};
    for (int i = 0; i < 3; i++) {
        cout << a*arr[i]<<"\n";
    }
    cout << a * b <<"\n";
    return 0;
}
