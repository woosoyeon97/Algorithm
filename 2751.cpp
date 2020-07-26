//
//  2751.cpp
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
    int a[1000002] = {0};
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for(int i = 0; i< n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}
