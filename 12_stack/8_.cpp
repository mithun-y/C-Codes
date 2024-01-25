#include<iostream>
// #include<algorithm>
// #include<string>
#include<stack>
using namespace std;
void removeduplicate(string s){
    stack<char> st;
    string c="";
    st.push(s[0]);
    c=st.top();
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()){
            st.push(s[i]);
            c=c+s[i];
        }
    }
    cout<<c;
}
int main(){
    string s="aaabbcddfgghh";
    removeduplicate(s);
    
}