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
    vector<int> a(m);
    int sum = 0;
    for(int i=0;i<m;i++){
        cin>>a[i];
        sum += a[i];
    }
    if(m>n){
        cout<<-1<<endl;
        return;
    }
    if(sum<n){
        cout<<-1<<endl;
        return;
    }
    vector<int> ans(m);
    for(int i = m-1; i>=0; i--){
        if(i==m-1){
            ans[i] = n-a[i]+1;
        }
        else{
            int temp = n-a[i]+1;
            if(temp<ans[i+1]) ans[i] = temp;
            else ans[i] = ans[i+1]-1;
        }
    }
    if(ans[0]<1){
        cout<<-1<<endl;
        return;
    }
    int j = 1;
    for(int i=0;i<m;i++){
        if(ans[i]>j){
            ans[i] = j;
        }
        j+=a[i];
        cout<<ans[i]<<" ";
    }
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