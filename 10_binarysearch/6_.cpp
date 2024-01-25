// peak index in mountain array 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,6,8,12,34,78,43,21,20,7,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int mid=0;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<mid;
            break;
        }
        else if(arr[mid]<arr[mid+1]){
            lo=mid+1;
        }
        else if(arr[mid]<arr[mid-1]){
            hi=mid-1;
        }
    }
}