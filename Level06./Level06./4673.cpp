//
//  4673.cpp
//  Level06.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int d(int n){
    int mol = 0, num = n, sum = 0;
    while (num > 0) {
        mol = num % 10;
        num = num /10;
        sum += mol;
    }
    sum +=n;
    return sum;
}

int main(){
    int arr[10000] = {0};
    for (int i = 1; i <= 10000; i++) {
        arr[d(i)-1] = i;
    }
    for (int i = 0; i < 10000; i++) {
        if (arr[i] == 0) {
            cout << i+1 << "\n";
        }
    }
    return 0;
}
