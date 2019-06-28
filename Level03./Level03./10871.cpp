//
//  10871.cpp
//  Level03.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i]<x) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
