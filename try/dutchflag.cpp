#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,1,0,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int mid=0;
    int hi=n-1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(mid<=hi){
        if(arr[mid]==2){
            int temp=arr[mid];
            arr[mid]=arr[hi];
            arr[hi]=temp;
            hi--;
        }
        else if(arr[mid]==0){
            int temp=arr[mid];
            arr[mid]=arr[lo];
            arr[lo]=temp;
            mid++;
            lo++;
        }
        else{
            mid++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}