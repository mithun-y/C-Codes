// linear search
#include<iostream>
using namespace std;
int main(){
    int arr[]={6,46,3,7,4,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=73;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=true;
            cout<<"element is present at index "<<i;
        }
    }
    if(flag = false){
        cout<<"element not present";
    }
    
}