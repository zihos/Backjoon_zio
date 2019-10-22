//
//  6064.cpp
//  Level08.
//
//  Created by 박지호 on 16/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int t, m, n, x, y;
    cin >> t;
    
    for (int z = 0; z < t; z++) {
        cin >> m >> n >> x >> y;
        int cal[m][n], i = 0, j = 0, num = 1;
        fill(&cal[0][0], &cal[m - 1][n-1], -1);
        int a, b;
        while (1) {
            a = i%m; b = j%n;
            cal[a][b] = num;
            if (a == m-1 && b == n-1) {
                break;
            }
            num++;
            i++;
            j++;
        }
        cout << cal[x-1][y-1] << "\n";
    }
    return 0;
}
