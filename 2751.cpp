//
//  2751.cpp
//  
//
//  Created by 우소연 on 2018. 2. 15..
//

#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int a[1000002]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=0;j<n;j++){
        cout<<a[j]<<'\n';
    }
    return 0;
}
