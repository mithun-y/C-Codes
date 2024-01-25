#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["mithun"]=30;
    m["rama"]=1;
    m["nanda"]=34;
    for(auto x: m){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
    m.erase("nanda");
    for(auto x: m){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
}