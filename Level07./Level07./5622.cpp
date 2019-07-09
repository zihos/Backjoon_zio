//
//  5622.cpp
//  Level07.
//
//  Created by 박지호 on 08/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    string str;
    int time = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        char c = str.at(i);
        switch (c) {
            case 'A': case 'B': case 'C':
                time+=3;
                break;
            case 'D': case 'E': case 'F':
                time+=4;
                break;
            case 'G': case 'H': case 'I':
                time+=5;
                break;
            case 'J': case 'K': case 'L':
                time+=6;
                break;
            case 'M': case 'N': case 'O':
                time+=7;
                break;
            case 'P': case 'Q': case 'R': case 'S':
                time+=8;
                break;
            case 'T': case 'U': case 'V':
                time+=9;
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                time+=10;
                break;
            default:
                break;
        }
    }
    cout << time << endl;
    return 0;
}
