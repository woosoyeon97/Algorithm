//
//  11656.cpp
//  
//
//  Created by 우소연 on 2018. 3. 16..
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
string a[1001];
int main() {
    vector<string> a;
    vector<char> c;
    string s;
    cin>>s;
    int n = s.size();
    for (int i=n-1;i>=0;i--){
        c.push_back(s[i]);
    }
    for(int i=0;i<n;i++){
        string temp;
        int len = c.size();
        for(int j=len-1;j>=0;j--){
            temp+=c[j];
        }
        a.push_back(temp);
        c.pop_back();
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++) {
        cout << a[i] << "\n";
    }
    return 0;
}
