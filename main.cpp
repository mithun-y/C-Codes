#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={21,2,4,8,5};
    // int small=INT_MAX;
    // int second_small=INT_MAX;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]<small){
    //         second_small=small;
    //         small=arr[i];
    //     } 
    //     else if(arr[i]<second_small && arr[i]!=small){
    //         second_small=arr[i];
    //     }
    // }
    // cout<<second_small;
    // int large=INT_MIN;
    // for(int i=0;i<arr.size();i++){
    //     if(large<arr[i]){
    //         large=arr[i];
    //     }
    // }
    // int slarge=INT_MIN;
    // for(int i=0;i<arr.size();i++){
    //     if(slarge<arr[i] && arr[i]!=large){
    //         slarge=arr[i];
    //     }
    // }
    // cout<<slarge;
    //one pass solution     
    int large=INT_MIN;
    int slarge=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(large<arr[i]){
            slarge=large;
            large=arr[i];
        }
        else if(slarge<arr[i]){
            slarge=arr[i];
        }
    }
    cout<<slarge;
}

