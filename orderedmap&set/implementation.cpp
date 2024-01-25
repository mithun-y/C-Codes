#include<iostream>
#include<set>
#include<unordered_map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(30);
    // s.insert(10);
    // s.insert(20);
    // for(int x:s){
    //     cout<<x<<" ";
    // }
    unordered_map<int,int> m;
    m[1]=2;
    for(int i=0;i<2;i++){
        m[1]--;
        for(auto x:m){
            cout<<x.first<<" "<<x.second;
            cout<<endl;
        }
        if(m[1]==0) m.erase(1);
    }
    m[1]++;
    m[2]++;
    m[3]++;
    for(auto x:m){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
}