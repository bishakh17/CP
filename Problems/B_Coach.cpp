#include<bits/stdc++.h>
using namespace std;

class dsu{
private:
//  vector containing parent of each index as value(-ve->self parent, size->node doesn't exist)
//  -ve values represents the number of elements in the set
    vector<int> set;

//  number of different groups that exists
    int count;

//  size of the set vector
    int size;
public:
    dsu(int n,bool t = false){
        count = 0;
        size = n;
        if(!t)set.resize(n,n); 
        else{
            count = n;
            set.resize(n,-1);
        }
    }

    //returns parent node with path compression
    //-1 indicates node doesn't exist or invalid index
    int find(int i){ 
        if(i<0 or i>=size) return -1;
        if(set[i]==size) return -1;
        if(set[i]<0) return i;
        else return set[i] = find(set[i]);  
    }

    // if node doesn't exist sets parent to -1(indicating its a root with size of set = -1)
    void push(int i){
        if(i>-1 and i<set.size() and set[i]==size){
            set[i]=-1;
            count++;
        }
    }

//  merges the 2 sets and returns whether the merge was successful
    bool merge(int i, int j){
        int rooti = find(i);
        int rootj = find(j);
        if(rooti==-1 or rootj==-1 or rooti==rootj) return false;
        count--;
        if(set[rooti]<set[rootj]){
            set[rooti] += set[rootj];
            set[rootj] = rooti;
        }
        else{
            set[rootj] += set[rooti];
            set[rooti] = rootj;
        }
        return true;
    }

//  returns the size of the group the element is in
    int groupSize(int i){
        int rooti = find(i);
        if(rooti==-1) return 0;
        else return -set[rooti]; 
    }

//  getters for private variables
    vector<int> getSet(){
        return set;
    }
    int getCount(){
        return count;
    }
    int getSize(){
        return size;
    }
};


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m;
    cin>>n>>m;
    dsu s(n+1,true);
    int t = 0;
    for(int i = 0; i<m; i++){
        int x,y;
        cin>>x>>y;
        s.merge(x,y);
    }
    int t = 0;
    for(int i = 1; i<=n; i++){
        if(s.groupSize(i)>3){cout(-1); return;}
        if(s.groupsize(i)==2)t++;
        if(s.groupsize(i)==1)t--;
    }
    if(t){cout(-1); return;}
    vector<int> temp = s.getSet();
    vector<>

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}