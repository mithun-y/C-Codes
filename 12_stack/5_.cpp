#include<iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx=-1;
    // Stack(){
    //     idx=-1;
    // }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"stack is full";
        }
        idx++;
        arr[idx]=val;
    }
    void top(){
        if(idx==-1){
            cout<<"stack is empty";
        }
        cout<<arr[idx];
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty";
        }
        idx--;
    }


};
int main(){
    Stack st;
    st.push(20);
    st.push(40);
    st.top();
    st.pop();
    st.top();
    st.pop();
    // st.pop();
    st.top();
}