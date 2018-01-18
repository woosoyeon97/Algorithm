//
//  prac8.cpp
//  
//
//  Created by 우소연 on 2018. 1. 19..
//
//

#include <iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    cout<<"<";
    for(int i=0;i<n;i++){
        for(int i=1;i<m;i++){
            q.push(q.front());
            q.pop();
        }
        if(i<n-1){
            cout<<q.front()<<", ";
            q.pop();
        }
    }
    cout<<q.front()<<">\n";
    return 0;
}
