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
    vector<int> a(m), b(m);
    vector<int> temp;
    vector<vector<int>> v(n, vector<int>(m));
    int k = -1;
    int t = 0;
    int ans = 1;
    for(int i = 0; i<n; i++){
        for(int j=0;j<m;j++){cin>>a[j]; b[j] = a[j]; v[i][j] = a[j];} 
        if(!ans) continue;
        if(t){
            int gg = a[temp[0]];
            a[temp[0]] = a[temp[1]];
            a[temp[1]] = gg;
            for(int i = 1; i<m; i++){
                if(a[i] < a[i-1]){
                    ans = 0;
                    break;
                }
            }
        }
        else{
            sort(b.begin(), b.end());       
            for(int p = 0; p<m; p++){
                if(a[p]!=b[p]){temp.push_back(p); t = 1; k = i;}
                if(temp.size() > 2){
                    ans = 0;
                    break;
                }
            }
        }
    }
    if(t and ans and k!=-1){
        for(int i = 0; i<k; i++){
            for(int j = 1; j<m; j++){
                int gg = v[i][temp[0]];
                v[i][temp[0]] = v[i][temp[1]];
                v[i][temp[1]] = gg;
                if(v[i][j] < v[i][j-1]) ans = 0;
            }
            if(!ans) break;
        }
    }
    if(!ans) cout(-1);
    else if(temp.size()==0) cout<<1<<" "<<1<<endl;
    else cout<<temp[0]+1<<" "<<temp[1]+1<<endl;
    



}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}