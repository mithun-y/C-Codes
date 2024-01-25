// arrays and pointers
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,21};
    int* ptr=arr;
    ptr++;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr;
    for(int i=0;i<4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}