// Input a string and return the 
// number of times the neighbouring characters are 
// different from each other.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        // if(i==0 && s[i+1]!=s[i]) count++;
        // if(i==n-1 && s[i]!=s[i-1]) count++;
        if(s[i]!=s[i-1] && s[i]!=s[i+1]) count++;
    }
    cout<<count;
    
}