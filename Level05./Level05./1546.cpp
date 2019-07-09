//
//  1546.cpp
//  Level05.
//
//  Created by 박지호 on 04/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    double m, sum = 0;
    cin >> n;
    double arr[n];
    //과목별 점수 입력받기
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //최대값 찾기
    sort(arr, arr+n);
    m = arr[n-1];
    //점수 조작
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i]/m*100;
        sum+=arr[i];
    }
    //새로운 평균
    cout << sum/n <<"\n";
    return 0;
}
