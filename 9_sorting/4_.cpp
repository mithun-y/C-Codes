// SELECTION SORT
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mdx=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                mdx=j;
            }
        }
        swap(arr[i],arr[mdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}