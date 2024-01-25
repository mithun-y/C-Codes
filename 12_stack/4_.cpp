// display stack using recursion
#include<iostream>
#include<stack>
using namespace std;
void reverserec(stack<int>& st){
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    reverserec(st);
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    reverserec(st);
}