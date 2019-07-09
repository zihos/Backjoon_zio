//
//  4344.cpp
//  Level05.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int c;
    cin >> c;
    double rate[c];
    for (int i = 0; i < c; i++) {
        int n;
        cin >> n;
        int student[n], sum = 0;
        double avg = 0, count = 0;;
        for (int j = 0; j < n; j++) {
            cin >> student[j];
            sum += student[j];
        }
        avg = sum / n;
        for (int k = 0; k < n; k++) {
            if (student[k]>avg) {
                count++;
            }
        }
        rate[i] = count / n *100;
    }
    
    for (int i = 0; i < c; i++) {
        cout << fixed;
        cout.precision(3);
        cout << rate[i] <<"%\n";
    }
    return 0;
}
