//
//  1978.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <iostream>
using namespace std;
bool prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int m;
    cin>>m;
    int p = 0;
    for (int i=0; i<m; i++) {
        int k=0;
        cin>>k;
        if (prime(k)) {
            p+= 1;
        }
    }
    cout<<p<<'\n';
    return 0;
}
