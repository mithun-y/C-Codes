//  Find the second largest element in the given Array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,4,3,9,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<smax;
}