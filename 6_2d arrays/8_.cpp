#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of matrix:";
    cin>>m;
    int n;
    cout<<"enter cols of matrix:";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;
    for(int i=m-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}