//
//  108442.cpp
//  
//
//  Created by 우소연 on 2018. 1. 24..
//
//

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    int d[101][10]={0};
    for(int k=1;k<=9;k++){
        d[1][k]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            if(j-1>=0){
                d[i][j]=d[i-1][j-1]+d[i][j];
            }if(j+1<=9){
                d[i][j]=d[i-1][j+1]+d[i][j];
            }
            d[i][j]=d[i][j]%1000000000;
        }
    }
    long long result=0;
    for(int i=0;i<=9;i++){
        result+=d[n][i];
        result=result % 1000000000;
    }
    cout<<result<<'\n';
    return 0;
}
