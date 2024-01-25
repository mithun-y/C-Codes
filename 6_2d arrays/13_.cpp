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
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            max=sum;
            idx=i;
        }
    }
    cout<<idx+1;
    cout<<max;
}