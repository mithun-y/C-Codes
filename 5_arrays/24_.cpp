#include <iostream>
using namespace std;
int main() {
    int arr[]={5,4,3,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    bool flag=true;
    while(i<=j){
        if(arr[i]!=arr[j]){
            cout<<"NOT A PALINDROME";
            break;
        }
        i++;
        j--;
    }
    
}