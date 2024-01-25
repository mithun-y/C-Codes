#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,4,3,4,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"enter the value";
    cin>>x;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x) cout<<"["<<i<<","<<j<<"]";
        }
    }
}