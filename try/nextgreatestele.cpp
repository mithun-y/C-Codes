#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    int max=arr[n-1];
    nge[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        nge[i]=max;
        if(max<arr[i]) max=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}