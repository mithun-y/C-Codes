#include <iostream>
using namespace std;
int main(){
    int n,a;
    int sum=0;
    cin>>n;
    while(n>0){
        a=n%10;
        sum+=a;
        n/=10;
    }
    cout<<sum;
}