#include <iostream>
using namespace std;
int main(){
    int a=1,n;
    cout<<"input n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=65;j<=65+i;j++){
            if(i%2==0){
                cout<<a<<" ";
                a++;
            }
            else {
                cout<<(char)j<<" ";
            }
        }
        cout<<endl;
        a=1;
    }
}