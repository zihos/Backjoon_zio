//
//  2562.cpp
//  Level05.
//
//  Created by 박지호 on 03/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int a, arr[9], max = 0;
    for (int i = 0; i < 9; i++) {
        cin >> a;
        arr[i] = a;
    }
    for (int i = 1; i < 9; i++) {
        if (arr[i] > arr[max]) {
            max = i;
        }
    }
    cout << arr[max] << "\n" << max+1 <<"\n";
    return 0;
}
