#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter the selling prize";
    cin>>sp;
    cout<<"enter the cost prize";
    cin>>cp;
    if(sp>cp){
        cout<<"profit of "<<sp-cp;
    }
    else{
        cout<<"LOSS of "<<cp-sp;
    }
}