#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(), a.end());
    int ans = INT64_MAX;
    int i = 0;
    int j = n-1;
    vector<int> pre_sum(n+1,0);
    for(int i = 1; i<=n; i++){
        pre_sum[i] = pre_sum[i-1]+a[i-1];
    }
    int count = 0;
    vector<int> temp;
    while(k){
        if(a[i]+a[i+1]>=a[j]){
            ans = count + pre_sum[n]-pre_sum[n-k];
            break;
        }
        else{
            temp.push_back(count + pre_sum[n] - pre_sum[n-k]);
            count+=a[i] + a[i+1];
            i+=2;
            k--;
            if(k==0){
                temp.push_back(count);
            }
        }
    }
    for(int i = 0; i<temp.size(); i++){
        ans = min(ans, temp[i]);
    }
    cout(sum-ans);

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}