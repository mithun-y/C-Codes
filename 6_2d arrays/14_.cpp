// Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3 
// 4 5 6
// 7 8 9
// Output 1: 
// 1 3
//  5
// 7 9
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int idx=0;
    int max=INT_MIN;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        if(i%2!=0){
            for(int j=0;j<3;j+=2){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=1;j<3;j+=2){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}