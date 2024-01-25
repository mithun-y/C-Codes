#include <iostream>
using namespace std;
int main() {
    int arr[5]={2,2,1,1,20};
    for(int i=0;i<5;i++){    
        int count=0;
        for(int j=0;j<5;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count>0 && count<2){
        cout<<arr[i];
        return 0;
        }
    }
    cout<<"no value is unique";
    return 0;
}