#include<iostream>
#include<queue>
using namespace std;
class Queue{
public :
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(b==7){
            cout<<"Queue is full";
            return;
        }
        arr[b]=val;
        b++;
        s++;
    }
    void pop(){
        if(f-b==0){
            cout<<"Queue is empty";
            return;
        }
        f++;
        s--;
    }
    int front(){
        if(f-b==0) return -1;
        return arr[f];
    }
    int back(){
        if(f-b==0) return -1;
        return arr[b-1]; 
    }
    int size(){
        return b;
    }
    bool empty(){
        if(f-b==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Queue q(5);
    // q.push(10);
    // q.push(20);
    // q.push(30);
    q.push(40);
    q.push(50);
    // q.push(60);
    // q.push(70);
    cout<<endl;
    // 
    cout<<q.empty();
    // cout<<q.back();
    cout<<endl;
    // cout<<q.front();
    // q.pop();
    q.display();
    cout<<q.size();
}