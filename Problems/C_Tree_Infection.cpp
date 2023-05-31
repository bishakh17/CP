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
    vector<int> a(n+1);
    int roots = 1;
    for(int i = 2; i<=n; i++){
        int x; cin>>x;
        a[x]++;
        if(a[x]==1) roots++;
    }
    a[0] = 1;
    sort(a.begin(), a.end(), greater<int>());
    int j = 0;
    int ans = roots;
    vector<int> left;
    int maxi = 0;
    while(j<=n and a[j]>0){
        if(a[j]-roots>0){
            left.push_back(a[j]-roots);
            maxi = max(maxi, a[j]-roots);
        }
        j++;
        roots--;
    }
    while(maxi){
        int temp = 0;
        int t = 1;
        for(int i = 0; i<left.size(); i++){
            if(left[i]<=0) continue;

            if(left[i]==maxi and t){
                left[i]-=2;
                t = 0;
            }
            else left[i]--;
            temp = max(temp, left[i]);
        }
        maxi = temp;
        ans++;
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