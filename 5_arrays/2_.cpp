// Find the element x in the array . Take array and x as input.
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int x;
    cout<<"enter the element"<<endl;
    cin>>x;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            cout<<"element is present at index "<<i;
        }
    }
}