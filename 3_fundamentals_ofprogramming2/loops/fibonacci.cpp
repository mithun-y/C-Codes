#include <iostream>
using namespace std;
int main(){
    int sum,a,b,n;
    cout<<"enter the number";
    cin>>n;
    a=0;
    b=1;
    sum=0;
    for(int i=0;i<n;i++){
        a=b;
        b=sum;
        sum=a+b;
        cout<<sum<<" ";
    }
}