//
//  10951.cpp
//  Level04.
//
//  Created by 박지호 on 03/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b;
    vector<int> A;
    vector<int> B;
    cin >> a>>b;
    while ((a = cin.get())!=EOF && (b = cin.get())!=EOF){
        cout << (int)a+(int)b <<"\n";
    }

    return 0;
}

