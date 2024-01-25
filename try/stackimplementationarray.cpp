#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Stack{
    int val;
    int i;
    int size;
    vector<int> arr;
    Stack(int val){
        i=0;
        size=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        arr[i]=val;
        i++;
        size++;
    }
    void pop(){
        i--;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }
    void top(){
        cout<<arr[i-1];
    }
};
int main(){
    Stack st(5);
    st.push(10);
}