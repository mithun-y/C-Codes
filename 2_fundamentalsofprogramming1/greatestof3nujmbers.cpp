// take 2 positive integers input and print the greatest of them
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the 3 intergers";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is greater";
    }
    else if(b>c){
        cout<<b<<" is greater";
    }
    else{
        cout<<c<< " is greater";
    }

}