//
//  10039.cpp
//  20201230
//
//  Created by 박지호 on 30/12/2020.
//  Copyright © 2020 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int score[5];
    int temp, sum=0;
    for (int i=0; i<5; i++) {
        cin >> temp;
        if (temp < 40) {
            score[i] = 40;
            sum+=score[i];
        }else{
            score[i] = temp;
            sum+=score[i];
        }
    }
    cout << sum/5 << endl;
    return 0;
}
