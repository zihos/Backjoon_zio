//
//  2748.cpp
//  20201230
//
//  Created by 박지호 on 30/12/2020.
//  Copyright © 2020 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int arr[100]={0};

int fibonacci(int x){
    if (x == 1) {
        return 1;
    }
    if (x == 2) {
        return 1;
    }
    if (arr[x] != 0) {
        return arr[x];
    }
    return arr[x] = fibonacci(x-1)+fibonacci(x-2);
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
