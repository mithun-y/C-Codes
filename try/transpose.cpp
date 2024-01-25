#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the rows";
    cin>>m;
    int n;
    cout<<"enter the column";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transpose
    int tra[n][m];
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            tra[j][i]=arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<tra[i][j]<<" ";
        }
        cout<<endl;
    }
}