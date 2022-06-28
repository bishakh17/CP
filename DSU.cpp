#include<bits/stdc++.h>

class dsu{
private:
    vector<int> set;
    int count;
    int size;
public:
    dsu(int n,int t = 0){
        count = 0;
        size = n;
        if(t==0)set.resize(n,n); 
        else{
            count = n;
            set.resize(n,-1);
        }
    }
    int find(int i){
        if(i<0 or i>=size) return -1;
        if(set[i]==size) return -1;
        if(set[i]<0) return i;
        else return set[i] = find(set[i]);  
    }
    void push(int i){
        if(i>-1 and i<set.size() and set[i]==size){
            set[i]=-1;
            count++;
        }
    }
    int merge(int i, int j){
        int rooti = find(i);
        int rootj = find(j);
        if(rooti==-1 or rootj==-1) return 0;
        if (rooti==rootj) return set[rooti];
        count--;
        if(set[rooti]<set[rootj]){
            set[rooti] += set[rootj];
            set[rootj] = rooti;
            return set[rooti];
        }
        else{
            set[rootj] += set[rooti];
            set[rooti] = rootj;
            return set[rootj];
        }
    }
    int getCount(){
        return count;
    }
    vector<int> getSet(){
        return set;
    }
    int getSize(){
        return size;
    }
};