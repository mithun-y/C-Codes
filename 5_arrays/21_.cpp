// whether the given array is sorted or not
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,34,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<"not sorted";
            flag=true;
            break;
        }

    }
    if(flag==false){
        cout<<"sorted";
    }

}