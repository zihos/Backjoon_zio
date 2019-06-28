//
//  10817.cpp
//  Level02.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a;
    int arr[3];
    for (int i = 0; i<3; i++) {
        cin >> a;
        arr[i] = a;
    }
    sort(arr,arr+3);
    cout << arr[1]<<endl;
    return 0;
}
