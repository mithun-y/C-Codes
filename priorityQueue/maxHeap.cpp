#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class Maxheap{
    vector<int> hp;
    void upheapify(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            } else{
                break;
            }
        }
    }
    void downheapify(int idx){
        while(idx<hp.size()){
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=hp.size()) break;
            int maxidx=idx;
            if(hp[lc]>hp[idx]){
                maxidx=lc;
            }
            if(rc<hp.size() && hp[rc]>hp[lc]){
                maxidx=rc;
            }
            if(maxidx!=idx){
                swap(hp[maxidx],hp[idx]);
                idx=maxidx;
            } else{
                break;
            }
        }
    }
public:
    void display(){
        cout<<"[";
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<",";
        }
        cout<<"]";
    }
    void remove(int remdx){  // delete any element 
        if(empty()) return;
        swap(hp[0],hp[remdx]);
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!empty()){
            downheapify(0);
        } else{
            return;
        }
        
    }
    void pop(){
        if(empty()) return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!empty()){
            downheapify(0);
        } else{
            return;
        }
    }
    bool empty(){
        return hp.size()==0;
    }
    void push(int val){
        hp.push_back(val);
        upheapify(hp.size()-1);
    }
    int peek(){
        if(empty()) return INT_MAX;
        return hp[0];
    }
    Maxheap(vector<int> v){
        hp=v;
        for(int i=1;i<hp.size();i++){
            upheapify(i);
        }
    }
};
int main(){
    vector<int> v={9,4,5,6,3,2,4,4};
    // MaxHeap hp(v);
    Maxheap hp(v);
    hp.display();
    hp.push(100);
    cout<<endl;
    hp.display();

    
}