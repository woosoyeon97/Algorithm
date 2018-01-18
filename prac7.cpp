
//
//  prac7.cpp
//  
//
//  Created by 우소연 on 2018. 1. 19..
//
//

#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    queue<int> q;
    while(n--){
        string a;
        cin>>a;
        if(a=="push"){
            int num;
            cin>>num;
            q.push(num);
        }else if(a=="pop"){
            if(q.empty()==1){
                cout<<-1<<'\n';
            }else{
                cout<<q.front()<<'\n';
                q.pop();
            }
        }else if(a=="size"){
            cout<<q.size()<<'\n';
        }else if(a=="empty"){
            cout<<q.empty()<<'\n';
        }else if(a=="front"){
            if(q.empty()==1){
                cout<<-1<<'\n';
            }else{
                cout<<q.front()<<'\n';
            }
        }else if(a=="back"){
            if(q.empty()==1){
                cout<<-1<<'\n';
            }else{
                cout<<q.back()<<'\n';
            }
        }
    }
    return 0;
}
