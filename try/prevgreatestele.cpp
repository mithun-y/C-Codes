#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pge[n];
    pge[0]=-1;
    int max=arr[0];
    for(int i=1;i<n;i++){
        pge[i]=max;
        if(max<arr[i]) max=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
}