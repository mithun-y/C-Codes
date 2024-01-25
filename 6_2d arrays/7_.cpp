// matric multiplication
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number of rows of first matrix";
    int m;
    cin>>m;
    cout<<"enter the number of column of first matrix";
    int n;
    cin>>n;
    int a[m][n];
    cout<<"enter the number of rows of second matrix";
    int p;
    cin>>p;
    cout<<"enter the number of column of second matrix";
    int q;
    cin>>q;
    int b[p][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    // multiplition program
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<p;k++){
                res[i][j]+=a[k][i]*b[j][k];
            }
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
    }
    
}