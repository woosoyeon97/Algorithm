//
//  1157.cpp
//  
//
//  Created by 우소연 on 09/04/2020.
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    string str;
    int location = 0;
    int maxnum = 0;
    int maxlocation = 0;
    int alphabet[92] = {0};
    int same = 0;
    cin>>str;
    for(int i = 0;i<str.size();i++){
        str[i] = toupper(str[i]);
        location =int(str[i]);
        alphabet[location]++;
        if(maxnum < alphabet[location]){
            same = 0;
            maxlocation = location;
            maxnum = alphabet[location];
        }else if(maxnum == alphabet[location]){
            same = 1;
        }
    }
    if(same == 1){
        cout<<"?"<<endl;
    }else{
        printf("%c",maxlocation);
    }
    return 0;
}
