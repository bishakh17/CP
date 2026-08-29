#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

vector<int> temp(1e6+1, 0);

void solve(){
    int x; cin>>x;
    int n = 2*x;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        temp[a[i]]++;
    }
    sort(a.begin(), a.end());
    vector<pair<int, int>> ans;
    ans.reserve(x);

    for(int i = 0; i<n-1; i++) {
        ans.push_back({a[n-1], a[i]});
        temp[a[n-1]]--;
        temp[a[i]]--;
        int curr = a[n-1];
        int k = 1;
        for(int j = n-1; j >= 0; j--) {
            if(j==i || temp[a[j]]==0) continue;
            temp[a[j]]--;
            int t = curr - a[j];
            int g = temp[t];
            temp[a[j]]++;
            if(g>0) {
                ans.push_back({a[j], t});
                temp[a[j]]--;
                temp[t]--;
                curr = a[j];
            }
            else {
                k = 0;
                while(!ans.empty()) {
                    auto p = ans.back();
                    ans.pop_back();
                    temp[p.first]++;
                    temp[p.second]++;
                }
                break;
            }
        }
        if(k) {
            cout("YES");
            cout(ans[0].first + ans[0].second);
            for(auto p: ans) {
                cout<<p.first<<" "<<p.second<<endl;
            }
            for(int i=0;i<n;i++) temp[a[i]] = 0;
            return;
        }
    }

    for(int i=0;i<n;i++) temp[a[i]] = 0;
    cout("NO");
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