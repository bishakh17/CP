#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int lg2(int n){
    int ans = 0;
    while(n%2==0){
        ans++;
        n/=2;
    }
    return ans;
}
void solve(){
    int n; cin>>n;
    int k = 0;
    for(int i = 0; i<n; i++){
        int x; cin>>x; 
        k+=lg2(x);
    }
    int ans = 0;
    vector<int> temp;
    for(int i = 1; i<=n; i++){
        temp.push_back(lg2(i));
    }
    sort(temp.begin(),temp.end());
    for(int i = temp.size()-1; i>=0; i--){
        if(k>=n){cout(ans); return;}
        k+=temp[i];
        ans++;
    }
    if(k<n) ans = -1;
    cout(ans);
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}