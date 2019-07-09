//
//  10952.cpp
//  Level04.
//
//  Created by 박지호 on 03/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b, end = 1;
    vector<int> A;
    vector<int> B;
    while (end){
        cin >> a >> b;
        if (a == 0 && b == 0) {
            end = 0;
        }else{
            A.push_back(a);
            B.push_back(b);
        }
    }
    for (int i = 0; i < A.size(); i++) {
        cout << A[i]+B[i] <<"\n";
    }
    return 0;
}
