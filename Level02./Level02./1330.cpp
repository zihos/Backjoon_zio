//
//  main.cpp
//  Level02.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << ">" << endl;
    }else if (a < b){
        cout << "<" << endl;
    }else
        cout << "=="<<endl;
    return 0;
}
