//
//  11004.cpp
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
    int a, b;
    scanf("%d %d", &a, &b);
    vector<int> v;
    for(int i = 0; i< a; i++){
        int temp;
        scanf("%d", &temp);
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    printf("%d\n", v[b - 1]);
}
