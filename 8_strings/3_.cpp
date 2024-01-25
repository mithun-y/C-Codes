#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of char";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<str;
    
}