#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="mithun";
    p1.second=23;
    m.insert(p1);
    pair<string,int> p2;
    p2.first="mitn";
    p2.second=2;
    m.insert(p2);
    for(auto p:m){
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }
}