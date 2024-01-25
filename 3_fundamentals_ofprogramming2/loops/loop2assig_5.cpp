#include <iostream>
using namespace std;
int main(){
    int n,ld;
    int sum=0;
    cout<<" enter the number";
    cin>>n;
    while(n>0){
        ld=n%10;
        if(ld%2==0){
            sum+=ld;
        }
        n/=10;
    }
    cout<<sum;
}