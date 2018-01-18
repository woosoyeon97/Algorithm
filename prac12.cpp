//
//  prac12.cpp
//  
//
//  Created by 우소연 on 2018. 1. 19..
//
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    //string alp={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
    string a;
    getline(cin,a);
    for(int i=0;i<a.size();i++){
        if(a[i]>='a' && a[i]<='m'){
            a[i]=a[i]+13;
        }else if(a[i]>'m' && a[i]<='z'){
            a[i]=a[i]-13;
        }else if(a[i]>='0' && a[i]<='9'){
            a[i]=a[i];
        }else if(a[i]>='A' && a[i]<='M'){
            a[i]=a[i]+13;
        }else if(a[i]>'M' && a[i]<='Z'){
            a[i]=a[i]-13;
        }
    }
    cout<<a<<'\n';
    return 0;
}
