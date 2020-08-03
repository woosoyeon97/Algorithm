//
//  10867.cpp
//  
//
//  Created by 우소연 on 27/07/2020.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    vector <int> v;
    cin>>n;
    for(int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i< v.size(); i++){
        cout<< v[i]<< " ";
    }
    return 0;
}
//계수 정렬
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main(){
//    int n;
//    cin>> n;
//    bool a[2002] = {false};
//    int max = -1;
//    for(int i = 0; i< n; i++){
//        int idx;
//        cin>> idx;
//        idx += 1000;
//        a[idx] = true;
//        if(max < idx){
//            max = idx;
//        }
//    }
//    for(int j = 0; j<= max; j++){
//        if(a[j] == true){
//            cout<< j - 1000 << " ";
//        }
//    }
//    return 0;
//}
