//
//  10809.cpp
//  Level07.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int arr[26];
    fill(arr, arr+26, -1);
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        int c = str.at(i);
        if(arr[c-97] == -1)
            arr[c-97] = i;
        
    }
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
