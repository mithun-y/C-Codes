#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue< int, vector<int>, greater<int> > pq;
    int k=3;
    int arr[]={10,20,-4,5,18,24,-7,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}