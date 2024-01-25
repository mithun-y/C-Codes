#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string t="physicswallah";
    string s="wallahphysics";
    sort(t.begin(),t.end());
    sort(s.begin(),s.end());
    if(s==t) cout<<true;
    else cout<<false;
}