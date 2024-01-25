#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target=15;
    int lo=0;
    int hi=n-1;
    int mid=0;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]>target){
            hi=mid-1;
        }
        else{  //arr[mid]<target
            lo=mid+1;
        }
    }
}