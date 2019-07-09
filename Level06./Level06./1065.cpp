//
//  1065.cpp
//  Level06.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int number(int n){
    int mol = 0, num = n;
    vector<int> arr;
    //각 자리수대로 끊어서 배열에 저장
    while (num > 0) {
        mol = num % 10;
        arr.push_back(mol);
        num = num/10;
    }
    //한자리 수이거나 두자리 수이면 무조건 한수
    if (arr.size()<3) {
        return 1;
    }else{  //세자리 숫자부터 검사
        int interval = arr[1] - arr[0], check = 1;
        for (int i = 2; i < arr.size(); i++) {
            if (arr[i] != arr[i-1]+interval) {
                check = 0;
                break;
            }
        }
        return check;
    }
}
int main(){
    int N;
    cin >> N;
    int count=0;
    for (int i = 1; i <= N; i++) {
        if (number(i) == 1) {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
