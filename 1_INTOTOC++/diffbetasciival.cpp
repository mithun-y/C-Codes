// WAP to find the difference between ASCII of two characters ,take them as input .
#include <iostream>
using namespace std;
int main(){
    char ch1,ch2;
    int dif;
    cout<<"enter the two ascii value";
    cin>>ch1>>ch2;
    dif=int(ch1)-int(ch2);
    cout<<dif;
}

