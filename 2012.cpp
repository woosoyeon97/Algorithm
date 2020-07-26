//
//  2012.cpp
//  
//
//  Created by 우소연 on 27/07/2020.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    vector<int> v;
    v.push_back(0);
    for(int i = 0; i< n; i++){
        int temp;
        scanf("%d", &temp);
        v.push_back(temp);
    }
    sort(v.begin() + 1, v.end());
    long long answer = 0;
    for(int i = 1; i <= n; i++){
        answer += abs(v[i] - i);
    }
    printf("%lld", answer);
    return 0;
}
