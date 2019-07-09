//
//  15596.cpp
//  Level06.
//
//  Created by 박지호 on 07/07/2019.
//  Copyright © 2019 박지호. All rights reserved.
//

#include <vector>
long long sum(std::vector<int> &a) {
    long long ans = 0;
    for(int i = 0;i < a.size();i++){
        ans += a[i];
    }
    return ans;
}


