#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3};
    int arr2[]={2,5,6};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[m+n];
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i]>=arr2[j]){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        else{
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }
    if(m==i){
        while(j<=n-1){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(n==i){
        while(i<=m-1){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }
    for(int i=0;i<m+n;i++){
        cout<<arr3[i]<<" ";
    }
}