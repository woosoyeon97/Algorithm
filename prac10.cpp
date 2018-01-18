//
//  prac10.cpp
//  
//
//  Created by 우소연 on 2018. 1. 19..
//
//

#include <iostream>
#include <string>
#include<cstdio>
using namespace std;
    char x;
int main(){
    while(getline(cin,s)){
    int lower, upper, num,space;
        while(~(x=getchar())){
            if(x>='a' && x<='z'){
                lower+=1;
            }if(x>='A' && x<='z'){
                upper+=1;
            }if(x>='0' && x<='9'){
                num+=0;
            }if(x==' '){
                space+=1;
            }if(x=='\n'){
                cout<<lower<<' '<<upper<<' ';
                cout<<num<< ' '<< space<< '\n';
            }
            int lower =0;
            int upper=0;
            int num=0;
            int space=0;
        }
    return 0;
}
    using namespace std;
    int main() {
        string s;
        while (getline(cin, s)) {
            int lower = 0;
            int upper = 0;
            int number = 0;
            int space = 0;
            for (char x: s) {
                if (x >= 'a' && x <= 'z') {
                    lower += 1;
                } else if (x >= 'A' && x <= 'Z') {
                    upper += 1;
                } else if (x >= '0' && x <= '9') {
                    number += 1;
                } else if (x == ' ') {
                    space += 1;
                }
            }
            cout << lower << ' '<< upper << ' ';
            cout << number << ' ' << space << '\n';
        }
        return 0;
    }
