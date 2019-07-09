//
//  10872.cpp
//  Level06.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int factorial(int n){
    int num = 1;
    for (int i = 0; i < n; i++) {
        num *= (i+1);
    }
    return num;
}
int main(){
    int n;
    cin >> n;
    cout << factorial(n) << "\n";
    return 0;
}
