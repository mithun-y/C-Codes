// WAP for finding the volume of the cylinder by taking radius and height as input
#include<iostream>
using namespace std;
int main(){
    int r,h;
    float v;
    cout<<"enter the radius";
    cin>>r;
    cout<<"enter the height";
    cin>>h;
    v=3.14*r*r*h;
    cout<<v;
}