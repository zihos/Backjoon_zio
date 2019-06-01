//
//  2839.cpp
//  20190527
//
//  Created by 박지호 on 28/05/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    int num = -1;   //못찾은 경우의 디폴트 값
    cin >> N;
    for (int i = 0; i <= N/3 && num == -1; i++) {
        for (int j = 0; j <= N/5; j++) {
            if (N == (5*j + 3*i)) {
                num = i+j;
                break;
            }
        }
    }
    cout << num << endl;
    return 0;
}
