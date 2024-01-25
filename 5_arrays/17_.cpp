#include<iostream>
using namespace std;
void rotate(int i,int j,int arr[]){
     while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
     }
}
int main(){
    int arr[]={1,3,2,4,3,4,1,6};
    int n=8;
    int k=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotate(0,n-k-1,arr);
    rotate(n-k,n-1,arr);
    rotate(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}