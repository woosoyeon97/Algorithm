//
//  11652.cpp
//  
//
//  Created by 우소연 on 2018. 2. 15..
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int cnt=0;
    long long num=0;
    int cnt2=1;
    long long a[1000002]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=1;j<n+1;j++){
        if(a[j-1]!=a[j]){
            if(cnt<cnt2){
                cnt=cnt2;
                num=a[j-1];
                cnt2=1;
            }else{
                cnt2=1;
            }
        }else{
            cnt2++;
        }
    }
    cout<<num<<'\n';
    return 0;
}

