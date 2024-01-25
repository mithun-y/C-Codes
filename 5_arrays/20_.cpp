// Count the number of elements strictly greater than x
#include<iostream>
using namespace std;
int main(){
    int count=0;
    int x;
    cin>>x;
    int arr[]={92,32,34,24,23,54};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(x<arr[i]) count++;
    }
    cout<<count;
}