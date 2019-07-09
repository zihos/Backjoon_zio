//
//  2941.cpp
//  Level07.
//
//  Created by 박지호 on 08/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char c =str.at(i);
        if ( c == 'c'| c == 'd'| c == 'l' | c == 'n' | c == 's' | c == 'z' && i < str.length()-1) {
            char c2 = str.at(i+1);
            switch (c) {
                case 'c':
                    if (c2 == '=' | c2 == '-') {
                        count++;
                        i++;
                    }else
                        count++;
                    break;
                case 'd':
                    if (c2 == 'z' && i < str.length()-2) {
                        if (str.at(i+2) == '=') {
                            count++;
                            i+=2;
                            break;
                        }else
                            count++;
                        
                    }else if( c2 == '-'){
                        count++;
                        i++;
                    }else
                        count++;
                    break;
                case 'l': case 'n':
                    if (c2 == 'j') {
                        count++;
                        i++;
                    }else
                        count++;
                    break;
                case 's': case 'z':
                    if (c2 == '=') {
                        count++;
                        i++;
                    }else
                        count++;
                    break;
                default:
                    break;
            }
        }else
            count++;
    }
    cout << count << "\n";
    return 0;
}
