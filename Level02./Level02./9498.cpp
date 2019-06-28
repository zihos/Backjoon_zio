//
//  9498.cpp
//  Level02.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (90<=n && n <=100) {
        cout << "A"<<endl;
    }else if (80<=n && n<90){
        cout <<"B"<<endl;
    }else if (70<=n && n<80){
        cout <<"C"<<endl;
    }else if (60<=n && n<70){
        cout <<"D"<<endl;
    }else
        cout << "F"<<endl;
    return 0;
}
