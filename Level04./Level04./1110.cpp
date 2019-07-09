//
//  1110.cpp
//  Level04.
//
//  Created by 박지호 on 06/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, num = 0, count = 0;
    int a, b;
    cin >> n;
    num = n;

    do {
        a = num / 10; //앞자리수 저장
        b = num % 10; //뒷자리수 저장
        num = b * 10 + ((a+b)%10);  //새로운 num
        count++;
    } while (num != n); //제자리로 돌아왔는지 체크
    
    cout << count << "\n";
    
    return 0;
}
