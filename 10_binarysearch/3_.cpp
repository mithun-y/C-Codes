#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int mid=0;
    int x=3;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            cout<<mid;
            break;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<endl;
    cout<<arr[lo-1];
}