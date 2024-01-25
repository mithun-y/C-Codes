// Sort the array of 0’s and 1’s .      COUNTING METHOD
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,1,1,0,1,0,1};
    int noo=0;
    int noz=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) arr[i]=0;
        else arr[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}