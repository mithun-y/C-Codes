// sum using recursion
#include<iostream>
using namespace std;
void fun(int sum,int n){
    if(n==0) {
        cout<<sum;
        return;
    }
    fun(sum+n,n-1);
}
int main(){
    int sum=0;
    int n;
    cin>>n;
    fun(sum,n);
}