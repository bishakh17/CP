#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

vector<int> temp(2e5+1,0);

void solve(){
    int n; cin>>n;
    vector<vector<int>> a(n);

    for(int i=0;i<n;i++){
        int k; cin>>k;
        a[i].resize(k);
        for(int j=0;j<k;j++){
            int x; cin>>x;
            a[i][j] = x;
            temp[x]++;
        }
    }
    for(int i=0;i<n;i++){
        int k = a[i].size();
        int t = 0;
        for(int j=0;j<k;j++){
            int x = a[i][j];
            if(temp[x]==1){
                t = 1;
                break;
            }
        }
        if(t==0){
            cout("YES");
            for(int i = 0; i < n; i++){
                for(int x : a[i]){
                    temp[x] = 0;
                }
            }
            return;
        }
    }
    for(int i = 0; i < n; i++){
        for(int x : a[i]){
            temp[x] = 0;
        }
    }
    cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}