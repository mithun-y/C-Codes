#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={4,1,2,5,4,3,4,8,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int> st;
    int nge[n];
    nge[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0  &&  st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()>0) nge[i]=st.top();
        else nge[i]=-1;
        st.push(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}