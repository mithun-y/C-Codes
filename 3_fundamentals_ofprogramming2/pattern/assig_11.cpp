#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    // cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=i+1;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}


