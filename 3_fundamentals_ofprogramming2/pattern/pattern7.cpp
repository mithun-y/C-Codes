#include<iostream>
using namespace std;
int main(){
    int mid=5/2+1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==mid||j==mid)cout<<"*";
            else cout<<"#";
        }
        cout<<endl;
    }
}




// my code
// if(i==3) {
//                 cout<<"*";
//                 continue;
//             }
//             if(j==3) cout<<"*";
//             else cout<<"#";