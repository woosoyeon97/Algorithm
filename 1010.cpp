//
//  1010.cpp
//
//
//  Created by 우소연 on 20/01/2020.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int combination(int m, int end, int n) {
    double result1 = 1;
    double result2 = 1;
    double result = 1;
    int k = n;
    while(m >= end){
        result1 = result1 * (double)m;
        m--;
    }
    while(k >= 1){
        result2 = result2 * (double)k;
        k--;
    }
    result = result1 / result2;
    return result;
}

int main()
{
    int T, N, M;
    int result;
    cin>>T;
    while(T > 0){
        cin>>N>>M;
        if(N > M-N){
            N = M-N;
        }
        result = combination(M, M - N + 1, N);
        cout<<result<<endl;
        T--;
    }
    return 0;
}
