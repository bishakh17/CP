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
    vector<vector<int>> v(n, vector<int>(5));
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin>>v[i][j];
        }
    }
    int w = 0;
    for(int i=1; i<n; i++){
        int cnt = 0;
        for(int j=0; j<5; j++){
            if(v[i][j] < v[w][j]){
                cnt++;
            }
        }
        if(cnt >= 3){
            w = i;
        }
    }
    for(int i=0; i<n; i++){
        if(i == w){
            continue;
        }
        int cnt = 0;
        for(int j=0; j<5; j++){
            if(v[i][j] < v[w][j]){
                cnt++;
            }
        }
        if(cnt >= 3){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<w+1<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}