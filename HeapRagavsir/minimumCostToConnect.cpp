#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={2,7,4,1,8};
    int n=sizeof(arr)/4;
    int mincost=0;
    priority_queue<int,vector<int>,greater<int> >pq;
    for(int x:arr){
        pq.push(x);
    }
    while(pq.size()>1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        pq.push(x+y);
        mincost+=(x+y);
    }
    cout<<mincost;
}   