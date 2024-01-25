#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num";
    cin>>n;
    bool flag=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
           flag=false;
           break;
        }
        flag=true;
    }
    if(flag==true) cout<<"it is a prime number";
    else cout<<"it is not a prime number";
}