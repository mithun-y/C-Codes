#include <iostream>
using namespace std;
int main(){
    int r;
    float circum,area;
    cout<<"Enter the radius";
    cin>>r;
    area=3.14*r*r;
    circum=2*3.14*r;
    if(area>circum){
        cout<<"area is greater than circumference";
    }
    else{
        cout<<"circumference is greater than area";
    }

}