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
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> idx(k+1);
    for(int i = 0; i<n; i++){
        idx[a[i]].push_back(i);
    }
    int ans = INT64_MAX;
    for(int i = 1; i<=k; i++){
        int m = idx[i].size();
        int maxi = 0;
        int cnt = 0;
        int prevMax = -1;
        if(m==0) continue;
        for(int j = 0; j<m; j++){
            if(j==0){
                maxi = max(maxi,idx[i][j]);
                cnt++;
            }
            else{
                int temp = idx[i][j]-idx[i][j-1]-1;
                if(temp>maxi){
                    prevMax = maxi;
                    maxi = temp;
                    cnt = 1;
                }
                else if(temp>prevMax){
                    prevMax = temp;
                }
                else if(temp==maxi){
                    cnt++;
                }
            }
        }
        int temp = n-idx[i][m-1]-1;
        if(temp>maxi){
            prevMax = maxi;
            maxi = temp;
            cnt = 1;
        }
        else if(temp>prevMax){
            prevMax = temp;
        }
        else if(temp==maxi){
            cnt++;
        }
        if(cnt==1){
            maxi = maxi/2;
        }
        maxi = max(maxi,prevMax);
        ans = min(ans,maxi);
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