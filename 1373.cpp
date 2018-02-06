//
//  1373.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    string a;
    int sum=0;
    cin>>a;
    int k=a.size();
    if(k%3==1){
        cout<<a[0];
    }else if(k%3==2){
        cout<<(a[0]-'0')*2+(a[1]-'0');
    }
    for(int i=k%3;i<k;i++){
        cout<<(a[i]-'0')*4+(a[i+1]-'0')*2+a[i+2]-'0';
        i+=2;
    }
    return 0;
}
