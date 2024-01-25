#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the sides of triangle";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"IT is equilateral triangele";
    }
    else if(a==b || b==a || a==c){
        cout<<"it is isoceles triangle";
    }
    else{
        cout<<"it is scalar triangle";
    }
}