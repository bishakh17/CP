#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<vector<int>> a(n,vector<int>(5));
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            if(i==j) continue;
            int cnti = 0, cntj = 0, cntij = 0;
            int t = 1;
            for(int k = 0; k<n; k++){
                if(a[k][i] and a[k][j]) cntij++;
                else if(a[k][i]) cnti++;
                else if(a[k][j]) cntj++;
                else t = 0;
            }
            if(!t) continue;
            if(cnti>n/2 or cntj>n/2) continue;
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}