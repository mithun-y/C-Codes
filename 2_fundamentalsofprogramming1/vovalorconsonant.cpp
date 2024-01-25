#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENTER THE ALPHABET";
    cin>>ch;
    if((ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')||(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')){
        cout<<" it is a vovel";
    }
    else{
        cout<<"it is a consonant";
    }
}