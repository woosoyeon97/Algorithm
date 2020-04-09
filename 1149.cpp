//
//  1149.cpp
//  
//
//  Created by 우소연 on 09/02/2020.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int dp[1002][4];
    int a[1002][4];
    int n;
    cin>>n;
    for(int i = 1;i<=n; i++){
        for(int j = 0;j<3;j++){
            cin>>a[i][j];
        }
        dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + a[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + a[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1]) + a[i][2];
    }
    cout<<min(dp[n][0],min(dp[n][1],dp[n][2]))<<endl;
    return 0;
}
 
