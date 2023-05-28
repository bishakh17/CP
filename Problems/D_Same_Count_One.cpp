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
    vector<int> ones(n,0);
    int total_ones = 0;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                ones[i]++;
                total_ones++;
            }
        }
    }
    if(total_ones%n!=0){cout(-1); return;}
    int gg = total_ones/n;
    unordered_set<int> ones_set;
    unordered_set<int> zeros_set;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(ones[i]>gg){ones_set.insert(i); ans+=ones[i]-gg;}
        if(ones[i]<gg)zeros_set.insert(i);
    }
    cout(ans);
    for(int j=0; j<m; j++){
        unordered_set<int> extra_ones;
        unordered_set<int> extra_zeros;
        for(int i = 0; i<n; i++){
            if(a[i][j]==1 and ones_set.find(i)!=ones_set.end()) {
                extra_ones.insert(i);
            }
            if(a[i][j]==0 and zeros_set.find(i)!=zeros_set.end()) {
                extra_zeros.insert(i);
            }
        }
        while(extra_ones.size()>0 and extra_zeros.size()>0){
            int t1 = *extra_ones.begin();
            int t2 = *extra_zeros.begin();
            cout<<t2+1<<" "<<t1+1<<" "<<j+1<<endl;
            extra_ones.erase(t1);
            extra_zeros.erase(t2);
            ones[t1]--;
            ones[t2]++;
            if(ones[t1]==gg)ones_set.erase(t1);
            if(ones[t2]==gg)zeros_set.erase(t2);
        }
    }    

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}