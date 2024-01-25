#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="raghavgarg";
    int n=s.size();
    int max=0;
    int idx=0;
    for(int i=0;i<n-1;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]) count++;
        }
        if(max<count){
            max=count;
            idx=i;
            cout<<max<<" ";
            cout<<s[idx];
            cout<<endl;

        }
    }
    cout<<endl;
    cout<<max<<endl;
    cout<<s[idx];
}