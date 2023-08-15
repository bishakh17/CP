#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<int> segTree;

int buildTree(int i, int s, int e, vector<int> &a){
    segTree.resize(4*a.size()+1);
    if(s==e) return segTree[i] = a[s];
    int mid = (s+e)/2;
    return segTree[i] = max(buildTree(2*i+1, s, mid, a), buildTree(2*i+2, mid+1, e, a));
}

int query(int i, int s, int e, int qs, int qe){
    if(qs>e or qe<s) return INT_MIN;
    if(qs<=s and qe>=e) return segTree[i];
    int mid = (s+e)/2;
    return max(query(2*i+1, s, mid, qs, qe), query(2*i+2, mid+1, e, qs, qe));
}

void solve(){
    int n,m; cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++) cin>>a[i];
    buildTree(0,0,m-1,a);
    int q; cin>>q;
    while(q--){
        int x1,y1,x2,y2,k; cin>>x1>>y1>>x2>>y2>>k;
        if(y1>y2){
            swap(x1,x2);
            swap(y1,y2);
        }
        if((y2-y1)%k!=0 or (abs(x2-x1))%k!=0){
            cout("NO");
            continue;
        }
        int target = n-((n-x1)%k);
        int l = y1-1;
        int r = y2-1;
        int ans = query(0,0,m-1,l,r);
        if(ans<target) cout("YES");
        else cout("NO");
    }

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}