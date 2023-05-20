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
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<int> c(n+1,0);
    for(int i = 0; i<n; i++) c[a[i]] = 1;
    int i = 0; int j = n;
    int k = 0;
    while(i<n and j>-1){
        if(a[i]==0){
            while((j>-1 and c[j]==1) or i+1==j){
                if(i+1==j) k = j;
                j--;
            }
            a[i] = j;
            j--;
        }
        i++;
    }
    int t = -1;
    for(int i = n-1; i>=0; i--){
        if(a[i]==-1 and i+1!=k) a[i] = k;
        else if(a[i]==-1){t=i; break;}
    }
    if(t!=-1){
        int gg;
        for(int i = 1; i<=n; i++){
            if(c[i]==0 and i!=t+1){
                a[t] = i;
                gg = i;
            }
        }
        for(int i = 0; i<n; i++){
            if(i!=t and a[i]==gg) a[i] = k;
        }
    }
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}