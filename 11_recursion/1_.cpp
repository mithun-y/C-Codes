//  Make a function which calculates the 
// factorial of n using recursion.
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter the number to find factorial"<<endl;
    cin>>n;
    cout<<fact(n);
}