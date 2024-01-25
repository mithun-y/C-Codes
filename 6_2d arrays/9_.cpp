#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number of rows";
    int m;
    cin>>m;
    cout<<"enter the number of column";
    int n;
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
    cout<<endl;
    // spril
    int minr=0,maxr=m-1,minc=0,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i];
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc];
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i];
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int j=maxr;j>=minr;j--){
            cout<<arr[j][minc];
        }
        minc++;
    }
}