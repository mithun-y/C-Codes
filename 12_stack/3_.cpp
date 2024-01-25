// reversing the array using the vector
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int> st;
    vector<int> v;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int i=0;
    while(st.size()>0){
        v[i]=st.top();
        st.pop();
        i++;
    }
    i=0;
    while(i<5){
        st.push(v[i]);
        i++;
    }
    cout<<st.top();
    
}