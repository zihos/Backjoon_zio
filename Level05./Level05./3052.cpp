//
//  3052.cpp
//  Level05.
//
//  Created by 박지호 on 03/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int arr[41] = {0}, num, mol, count = 0;
    //배열 크기 : 가능한 나머지 만큼
    //입력받은 수의 나머지를 구해서 카운트
    for (int i = 0; i <10; i++) {
        cin >> num;
        mol = num % 42;
        arr[mol]++;
    }
    for (int i = 0; i < 41; i++) {
        if (arr[i] > 0) {
            count++;
        } //0보다 큰값이면 서로다른 나머지 -> 카운트
    }
    cout << count << "\n";
    return 0;
}
