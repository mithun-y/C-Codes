#include<iostream>
using namespace std;
int main(){
    cout<<"enter num";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-1-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++){
            cout<<k;
        }
        for(int l=i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}