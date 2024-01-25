    // NEXT PERMUTATION   LEET CODE 31

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    int n=v.size();
    int pvt=-1;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    // finding the pivot element
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            pvt=i;
            break;
        }
    }
    // exception case
    if(pvt==-1){
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    // reversing the part of the vector
    reverse(v.begin()+pvt+1,v.end());
    // finding the just greater element
    int j=-1;
    for(int i=pvt+1;i<n;i++){
        if(v[i]>v[pvt]){
            j=i;
            break;
        }
    }
    // swaping with just greater element and pvt element
    int temp=v[pvt];
    v[pvt]=v[j];
    v[j]=temp;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


}