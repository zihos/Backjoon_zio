//
//  baekjoon 1193.cpp
//  Level08.
//
//  Created by 박지호 on 14/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n, count = 1, sum = 0, Numerator = 0, Denominator = 0;
    cin >> n;
    while (n > sum) {
        sum += count;
        count++;
    }
    
    for (int i = 0; i <= sum-n; i++) {
        if (count % 2 == 0) {
            Numerator = i+1;
            Denominator = count - Numerator;
        }else{
            Denominator = i+1;
            Numerator = count - Denominator;
        }
        
    }
    cout << Numerator << "/" << Denominator << endl;
    return 0;
}
