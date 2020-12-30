//
//  5543.cpp
//  20201230
//
//  Created by 박지호 on 30/12/2020.
//  Copyright © 2020 박지호. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int burger[3], drink[2], price;
    
    for (int i =0; i<3; i++) {
        cin >> burger[i];
    }
    for (int i=0; i<2; i++) {
        cin >> drink[i];
    }
    sort(burger, burger+3);
    sort(drink, drink+2);
    
    price = burger[0]+drink[0]-50;
    cout << price << endl;
    return 0;
}
