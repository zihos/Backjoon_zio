//
//  11021.cpp
//  Level03.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }
    for (int i = 0; i < n; i++) {
        cout <<"Case #"<<i+1<<": "<< arr[i][0]+arr[i][1] << endl;
    }
    return 0;
}