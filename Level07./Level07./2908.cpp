//
//  2908.cpp
//  Level07.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int a, b, num1 = 0, num2 = 0;
    cin >> a >> b;
    int arr1[3], arr2[3];
    for (int i = 0; i < 3; i++) {
        arr1[i] = a%10;
        a= a/10;
        arr2[i] = b%10;
        b= b/10;
    }
    num1 = arr1[0]*100+arr1[1]*10+arr1[2];
    num2 = arr2[0]*100+arr2[1]*10+arr2[2];
    if (num1 > num2) {
        cout << num1 << "\n";
    }else
        cout << num2 << "\n";
    return 0;
}
