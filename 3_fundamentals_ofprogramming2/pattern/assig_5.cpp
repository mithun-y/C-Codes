#include<iostream>
using namespace std;
int main(){
    int m=4;
    int n=6;
    for(int i=1;i<=m;i++){
        if(i==1||i==m){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int k=1;k<=n;k++){
                if(k==1||k==n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}