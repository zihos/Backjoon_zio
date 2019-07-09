//
//  2920.cpp
//  Level05.
//
//  Created by 박지호 on 03/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int arr[8], mixed = 0, e = 8;
    for (int i = 0; i <8; i++) {
        cin >> arr[i];
    }
    if (arr[0] == 1) {
        for (int i = 0; i <8; i++) {
            if (arr[i] != i+1) {
                cout << "mixed\n";
                mixed = 1;
                break;
            }
        }
        if (mixed != 1) {
            cout << "ascending\n";
        }
    }else if (arr[0] == 8){
        for (int i = 0; i < 8; i++) {
            if (arr[i] != e) {
                cout << "mixed\n";
                mixed = 1;
                break;
            }
            e--;
        }
        if (mixed != 1) {
            cout << "descending\n";
        }
    }else
        cout <<"mixed\n";
    return 0;
}
