#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the 3 numbers";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greater";
        }
        else{ // c>a
            cout<<c<<" is greater";
        }
    }
    else{//(b>a)
        if(b>c){
            cout<<b<<" is greater";
        }
        else{// c>b
            cout<<c<<" is greater";
        }
    }
}