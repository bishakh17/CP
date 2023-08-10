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
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    vector<vector<int>> after(n,vector<int>(n,0));

    for(int i = n-1; i>0; i--){
        for(int j = n-2; j>=0; j--){
            if(a[j+1]<i+1) after[i][j] = after[i][j+1]+1;
            else after[i][j] = after[i][j+1];
        }
    }
    vector<int> before(n,0);
    int ans = 0;
    for(int i = 1; i<n; i++){
        for(int k = 1; k<n; k++){
            if(a[i-1]<k+1) before[k] = before[k]+1;
        }
        for(int j = i+1; j<n; j++){
            int temp1 = after[a[i]-1][j];
            int temp2 = before[a[j]-1];
            ans += temp1*temp2;
        }
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