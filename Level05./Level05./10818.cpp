//
//  10818.cpp
//  Level05.
//
//  Created by 박지호 on 03/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }
    sort(arr, arr+n);
    cout << arr[0] <<" " <<arr[n-1]<<"\n";
    return 0;
}
