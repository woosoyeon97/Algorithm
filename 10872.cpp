//
//  10872.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    int r=1;
    cin>>n;
    for(int i=n;i>0;i--){
        r=r*i;
    }
    cout<<r;
    return 0;
}
