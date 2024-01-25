#include<iostream>
#include<vector>
using namespace std;
class Stack{
public:
    int val;
    vector<int> v;
    void push(int val){
        v.push_back(val);
    }
    void top(){
        cout<<v[v.size()-1];
    }
    void pop(){
        v.pop_back();
    }
    void size(){
        v.size();
    }
    
};
int main(){
    Stack st;
    st.push(30);
    st.top();
    st.size();
}