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
    vector<int> v(n);
    int maxi = 0;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
        maxi = max(maxi,v[i]);
        mini = min(mini,v[i]);
    }
    int ans = maxi*mini;
    for(int i=0;i<n;i++){
        if(ans%v[i]!=0){
            cout<<-1<<endl;
            return;
        }
    }
    int temp = ans;
    int count = 1;
    for(int i=2;i*i<=ans;i++){
        int cnt = 0;
        if(temp%i==0){
            while(temp%i==0){
                temp/=i;
                cnt++;
            }
            count*=(cnt+1);
        }
    }
    if(temp>1){
        count*=2;
    }
    
    if(count!=n+2){
        cout<<-1<<endl;
        return;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}