//
//  2798.cpp_블랙잭
//  Level10.
//
//  Created by 박지호 on 22/10/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int card[n];
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }
    
    vector<int> sum;

    //모든 경우의 수 다 저장
    for (int a = 0; a < n-2; a++) {
        for (int b = a+1; b < n-1; b++) {
            for (int c = b+1; c < n; c++) {
                int x = card[a]+card[b]+card[c];
                sum.push_back(x);

            }
        }
    }
    
    //정렬
    sort(sum.begin(), sum.end());
    
    int value;
    
    //m에 가까운 수 찾기
    for (int i = 0; i < sum.size(); i++){
        //m보다 큰 수 가 있는 경우
        if(sum[i] > m){
            //전부다 m보다 큰 경우
            if (i == 0) {
                value = sum[i];
            }else
                value = sum[i-1];
            break;
        }//m보다 큰 수 가 없는 경우
        else if (i == sum.size()-1)
            value = sum[i];
    }

    cout << value << endl;
    
}
