//  Write a program to copy the contents of one 
// array into another in the reverse order.         WITHOUT USING EXTRA SPACE
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,4,3,4,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}