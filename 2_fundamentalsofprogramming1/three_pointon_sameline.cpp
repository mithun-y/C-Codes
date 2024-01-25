#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"enter the points of x1 and y1";
    cin>>x1>>y1;
    cout<<"enter the points of x1 and y1";
    cin>>x2>>y2;
    cout<<"enter the points of x1 and y1";
    cin>>x3>>y3;
    int slope1=(y2-y1)/(x2-x1);
    int slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2) cout<<"All three points lies on the same line";
    else{
        cout<<"All three points does not lie on the same line";
    }
}