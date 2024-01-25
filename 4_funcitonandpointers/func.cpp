#include<iostream>
using namespace std;
void fun(int n){
    while(n>0){
    int a;
    a=n*n;
    cout<<a;
    n--;
    cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
}