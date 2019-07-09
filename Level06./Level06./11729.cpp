//
//  11729.cpp
//  Level06.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int n;

int hanoiSub(int n){
    if (n == 1) {
        return 1;
    }
    else
        return 2*hanoiSub(n-1) +1;
}
int hanoi(){
    return hanoiSub(n);
}
int main(){
    vector<vector<int>> plate;
    for (int i = 0; i < 3; i++) {
        plate.push_back(vector<int>());
    }
    //int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        plate[0].push_back(i);
    }
    //2차원 벡터 출력
//    for (int i = 0; i < plate.size(); i++) {
//        cout << i <<" : ";
//
//        for (int j = 0; j < plate[i].size(); j++) {
//            cout << plate[i][j] << " ";
//        }
//        cout << endl;
//    }
    cout << hanoi() <<endl;
    return 0;
}
