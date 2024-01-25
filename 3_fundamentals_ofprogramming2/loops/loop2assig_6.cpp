#include <iostream>
using namespace std;
int main(){
    int n,ld=0,rev=0;
    cout<<"enter the number";
    cin>>n;
    int a=n;
    while(n>0){
        ld=n%10;
        rev*=10;
        rev+=ld;
        n/=10;
    }
    cout<<a+rev;
}