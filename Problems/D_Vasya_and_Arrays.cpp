#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int sum1=0, sum2=0;
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum1+=a[i];
    }
    int m; cin>>m;
    vector<int> b(m);
    for(int i=0; i<m; i++){
        cin>>b[i];
        sum2+=b[i];
    }
    if(sum1!=sum2){
        cout<<-1<<endl;
        return;
    }
    int i = 0, j = 0;
    int ans = 0;
    int cnt = a[i]-b[j];
    while(i<n && j<m){
        if(cnt==0){
            ans++;
            i++;
            j++;
            if(i<n && j<m){
                cnt = a[i]-b[j];
            }
        }
        if(cnt>0){
            j++;
            cnt-=b[j];

        }
        if(cnt<0){
            i++;
            cnt+=a[i];
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}