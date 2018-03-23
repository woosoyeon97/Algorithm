//
//  2579.cpp
//  
//
//  Created by 우소연 on 2018. 3. 23..
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int d[302][3];
    int a[301];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    d[1][1]=a[1];
    for (int i=2; i<=n; i++) {
        d[i][2] = d[i-1][1] + a[i];
        d[i][1] = max(d[i-2][1], d[i-2][2]) + a[i];
    }
    cout<<max(d[n][1],d[n][2]);
    return 0;
}
