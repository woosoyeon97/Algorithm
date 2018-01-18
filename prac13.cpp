//
//  prac13.cpp
//  
//
//  Created by 우소연 on 2018. 1. 19..
//
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
   /* int a,b,c,d;
    cin>>a>>b>>c>>d;
    string n1=to_string(a)+to_string(b);
    string n2=to_string(c)+to_string(d);
    long long l1 = stoll(n1);
    long long l2 = stoll(n2);
    
    cout << l1 + l2 << '\n';
    return 0;*/

    string a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a+b;
    c=c+d;
    int n1=stoll(a);
    int n2=stoll(c);
    int result=n1+n2;
    cout<<result<<'\n';
    return 0;
}
