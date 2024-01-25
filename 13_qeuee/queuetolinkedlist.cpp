#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void pop(){
        if(size==0) cout<<"queue is empty";
        Node* temp=head;
        head=head->next;
        size--;
        delete(temp);
    }
    void front(){
        if(size==0) cout<<"queue is empty";
        cout<<head->val;
    }
    void back(){
        if(size==0) cout<<"queue is empty";
        cout<<tail->val;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.display();
    q.front();
    q.back();
    cout<<endl;
    cout<<q.size;
    // q.display();
    
}