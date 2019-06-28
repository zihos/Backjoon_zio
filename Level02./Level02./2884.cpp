//
//  2884.cpp
//  Level02.
//
//  Created by 박지호 on 24/06/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int h, m;
    cin >> h >> m;
    if (h == 0) { //날짜가 바뀌는 경우 고려!!
        if (m >= 45) {
            cout << h << " " << m - 45 <<endl;
        }else{
            m = 45 - m;
            cout << 23 << " "<< 60 - m <<endl;
        }
    }else{
        if (m >= 45) {
            cout << h << " " << m - 45 <<endl;
        }else{
            m = 45 - m;
            cout << h-1 << " "<< 60 - m <<endl;
        }
    }

    return 0;
}
