#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x and y";
    cin>>x>>y;
    if(x==0&&y==0){
        cout<<"the points are at the origin";
    }
    else if(x==0 &&y!=0){
        cout<<"the points lies on the y-axis";
    }
    else if(x!=0 && y==0){
        cout<<"the points lies on the x-axis";
    }
}