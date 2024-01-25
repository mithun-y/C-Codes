//  Find the last occurrence of x in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,4,3,2,3,1,4};
    int x;
    cin>>x;
    for(int i=7;i>=0;i--){
        if(arr[i]==x){
            cout<<i;
            break;
        }
    }
}