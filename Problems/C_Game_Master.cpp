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
    string ans(n,'0');
    vector<vector<int>> a1(n,vector<int>(3));
    vector<vector<int>> a2(n,vector<int>(3));
    for(int i=0;i<n;i++){
        cin>>a1[i][0];
        a2[i][1] = a1[i][0];
        a1[i][2] = i;
    }
    for(int i=0;i<n;i++){
        cin>>a2[i][0];
        a1[i][1] = a2[i][0];
        a2[i][2] = i;
    }
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
    int maxi = a2[n-1][0];
    int target = a2[n-1][1];
    int mini = INT64_MAX;
    for(int i=0;i<n;i++){
        if(a1[i][0]<target) continue;
        mini = min(mini,a1[i][1]);
    }
    for(int i = n-1; i>=0; i--){
        if(a2[i][0]<mini) break;
        ans[a2[i][2]] = '1';
    }
    maxi = a1[n-1][0];
    target = a1[n-1][1];
    mini = INT64_MAX;
    for(int i=0;i<n;i++){
        if(a2[i][0]<target) continue;
        mini = min(mini,a2[i][1]);
    }
    for(int i = n-1; i>=0; i--){
        if(a1[i][0]<mini) break;
        ans[a1[i][2]] = '1';
    }
    cout<<ans<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}