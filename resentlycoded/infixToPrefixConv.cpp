#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int priority(char c){
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}
string convert(string& s){
    string ans="";
    int i=0;
    stack<int> st;
    reverse(s.begin(),s.end());  //important difference
    for(int j=0;j<s.size();j++){
        if(s[j]=='(') s[j]=')';
        else if(s[j]==')') s[j]='(';
    }
    while(i<s.size()){
        if((s[i]>='a' && s[i]<='z') ||
            (s[i]>='A' && s[i]<='Z') ||
            (s[i]>='1' && s[i]<='9')){
                ans+=s[i];
            }
        else if(s[i]=='('){
            st.push('(');
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        } else{
            if(st.empty()){
                st.push(s[i]);
            } else{                            
                while(!st.empty() && priority(st.top())>priority(s[i])){//important difference
                    ans+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());   //important difference
    return ans;
}
int main(){
    string s="(A+B)*C-D+F";
    cout<<convert(s);
}