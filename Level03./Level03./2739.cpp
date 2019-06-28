//
//  2739.cpp
//  Level03.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for (int i = 1; i <=9; i++) {
        cout << N <<" * "<<i<<" = "<<N*i<<endl;
    }
    return 0;
}
