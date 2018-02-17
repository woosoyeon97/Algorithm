//
//  1377.cpp
//  
//
//  Created by 우소연 on 2018. 2. 15..
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int cnt=0;
    bool change = false;
    int n;
    int a[500002]={0};
    cin>>n;
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    for (int i=1; i<=n+1; i++) {
        change = false;
        for (int j=1; j<=n-i; j++) {
            if (a[j] > a[j+1]) {
                change = true;
                swap(a[j], a[j+1]);
            }
        }
        if (change == false) {
            break;
        }
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
