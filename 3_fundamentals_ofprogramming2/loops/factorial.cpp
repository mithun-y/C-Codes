 #include <iostream>
using namespace std;
int main(){
    int n,product;
    cout<<"enter the number";
    cin>>n;
    product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    cout<<product;


}