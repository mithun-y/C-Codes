#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int x=0;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    while(st.size()>0){
        cout<<st.top()<<endl;
        x=st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        x=temp.top();
        st.push(x);
        temp.pop();
    }
    cout<<st.size();
}