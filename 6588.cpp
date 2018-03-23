//
//  6588.cpp
//  
//
//  Created by 우소연 on 2018. 3. 16..
//

#include <stdio.h>
#include <iostream>
using namespace std;
const int MAX = 1000000;
int arr[MAX];
int cnt;
bool check[MAX+1];
int main() {
    for (int i = 2; i <= MAX; i++) {
        if (check[i] == false) {
            arr[cnt++] = i;
            for (int j = i + i; j <= MAX; j += i) {
                check[j] = true;
            }
        }
    }
    while (true) {
        int n;
        scanf("%d",&n);
        if (n == 0) {
            break;
        }
        for (int i = 1; i < cnt; i++) {
            if (check[n - arr[i]] == false) {
                printf("%d = %d + %d\n",n,arr[i],n-arr[i]);
                break;
            }
        }
    }
    return 0;
}
