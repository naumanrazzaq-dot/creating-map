#include<iostream>
#include<list>
#include <vector>
#include<queue>
#include<stack>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["laptop"]=40;
    m["tv"]=30;
    m["USB"]=90;
    for(auto val:m){
        cout<<val.first<<" = "<<val.second<<endl;
    }
    
};