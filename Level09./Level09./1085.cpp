//
//  1085.cpp
//  Level09.
//
//  Created by 박지호 on 30/09/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    vector<int> dis;
    dis.push_back(x);
    dis.push_back(y);
    dis.push_back(w-x);
    dis.push_back(h-y);
    cout << *(min_element(dis.begin(), dis.end()))<< endl;
    
    return 0;
}
