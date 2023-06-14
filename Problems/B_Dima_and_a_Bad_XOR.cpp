#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    int idx = -1;
    int xr = 0;
    for(int i=0;i<n;i++){
        int t = 0;
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(j!=0 and a[i][j]!=a[i][j-1]) t=1;
        }
        if(t==1) idx = i;
        xr^=a[i][0];
    }
    if(xr!=0){
        cout("TAK");
        for(int i=0;i<n;i++) cout<<1<<" ";
        cout<<endl;
        return;
    }
    if(idx==-1){
        cout("NIE");
        return;
    }
    cout("TAK");
    for(int i=0;i<n;i++){
        if(i!=idx) cout<<1<<" ";
        else{
            for(int j = 1; j<m; j++){
                if(a[i][j]!=a[i][j-1]){
                    cout<<j+1<<" ";
                    break;
                }
            }
        }
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