#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character";
    cin>>ch;
    int a=int(ch);
    if((a>=65 && a<=90)||(a>=97 && a<=122)){
        cout<<"it is a alphabet";
    }
    else{
        cout<<"it is not a alphabet";
    }

}