//
//  10989.cpp
//  
//
//  Created by 우소연 on 2018. 2. 15..
//


#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n;
    int a[1000002]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a[k]+=1;
    }
    for(int j=0;j<1000002;j++){
        if(a[j]!=0){
            for(int p=0;p<a[j];p++){
                cout<<j<<'\n';
            }
        }
    }
    return 0;
    
}
