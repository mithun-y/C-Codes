#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max Heap
    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // pq.push(50);
    // cout<<pq.top();
    

    //minHeap
    priority_queue< int , vector<int>, greater<int> > pq;
    pq.push(10);
    pq.push(50);
    pq.push(140);
    pq.push(30);
    pq.push(20);
    cout<<pq.top();
}