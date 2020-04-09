//
//  1152.cpp
//  
//
//  Created by 우소연 on 09/04/2020.
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#define SIZE 1000002
using namespace std;
int main()
{
    char a[SIZE]="";
    char seps[] =" ";
    int count;
    char *token;
    count=0;
    string str;
    getline(cin,str);
    strcpy(a,str.c_str());
    token=strtok(a," ");
    while(token!=NULL)
    {
        count++;
        token=strtok(NULL,seps);
    }
    cout<<count<<endl;
    return 0;
    
}

