//
//  8958.cpp
//  Level05.
//
//  Created by 박지호 on 06/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n;  //testcase 개수
    cin >> n;
    string testcase[n]; //testcase 저장할 string 배열
    //testcase저장하기
    for (int i = 0; i < n; i++) {
        cin >> testcase[i];
    }
    //testcase별로 char 배열을 만들어서 문자 하나하나 배열에 저장
    for (int i = 0; i < n; i++) {
        int a = testcase[i].length();
        int num = 0, sum = 0;
        char testarr[a];
        for (int j = 0; j < a; j++) {
            testarr[j] = testcase[i].at(j);
        }
        for (int k = 0; k < a; k++) {
            //num으로 누적해서 문제별 점수 구하기
            if (testarr[k] == 'O') {
                num++;
            }else{
                num = 0;
            }
            //문제별 점수를 누적해서 더해서 testcase 점수 sum 구하기
            sum += num;
        }
        cout << sum <<"\n";
    }
    return 0;
}
