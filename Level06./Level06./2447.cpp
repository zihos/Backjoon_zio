//
//  2447.cpp
//  Level06.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
void star(int n);
int main(){
    int n, count = 0;
    cin >> n;
    while(n > 2){
        n /=3;
        count++;
    }
    cout << count << "\n";
    star(count);
    return 0;
}

string starSub(int n){
    string pattern1, pattern2, pattern3;
    if (n == 1) {
        pattern1 = "***";
        pattern2 = "* *";
        pattern3 = "***";
        return pattern1+"\n"+pattern2+"\n"+pattern3;
    }else{
        for (int i = 0; i < 3; i++) {
            for (int a = 0; a < 3; a++) {
                pattern1 += starSub(n-1)
            }
        }
    }
}

void star(int n){
    
    cout << starSub(n);
}
