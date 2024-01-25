//  Write a program to copy the contents of one 
// array into another in the reverse order.         WITH USING EXTRA SPACE
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,4,3,4,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int rev[7];
    int i=7;
    int j=0;
    while(i>=0){
      rev[j]=arr[i];
        i--;
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<rev[i]<<" ";
    }
}