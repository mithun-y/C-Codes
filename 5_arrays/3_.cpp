//  Find the maximum value out of all the elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,4,3,9,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
}