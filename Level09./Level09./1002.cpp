//
//  1002.cpp
//  Level09.
//
//  Created by 박지호 on 06/10/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        double d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        int sum = r1+r2;
        int sub = abs(r1-r2);

        if (d == 0) {   //동심원인 경우
            if (r1 == r2) {
                cout << "-1" << endl;
            }else
                cout << "0" << endl;
        }else{
            if (d < sum && d > sub) {  //두점에서 만나는 경우
                cout << "2" << endl;
            }else if (d == sum || d == sub) //한점에서 만나는 경우 - 외접원, 내접원
                cout << "1" << endl;
            else    //안만나는 경우
                cout << "0" << endl;
        }
    }
    
    return 0;
}
