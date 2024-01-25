#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-1-i;j++){
            cout<<" ";
        }
        for(int k=65;k<=65+i;k++){
            cout<<(char)k;
        }
        cout<<endl;
    }
}