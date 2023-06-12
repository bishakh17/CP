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
    vector<string> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> ans;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<m-1; j++){
            vector<pair<int,int>> ones;
            vector<pair<int,int>> zeros;
            if(a[i][j]=='1'){ones.push_back({i,j}); a[i][j]='0';}
            else zeros.push_back({i,j});
            if(a[i+1][j]=='1'){ones.push_back({i+1,j}); a[i+1][j]='0';}
            else zeros.push_back({i+1,j});
            if(a[i][j+1]=='1'){ones.push_back({i,j+1}); a[i][j+1]='0';}
            else zeros.push_back({i,j+1});
            if(a[i+1][j+1]=='1'){ones.push_back({i+1,j+1}); a[i+1][j+1]='0';}
            else zeros.push_back({i+1,j+1});
            if(ones.size()==0) continue;
            if(ones.size()==1){
                ans.push_back({ones[0].first,ones[0].second,zeros[0].first,zeros[0].second,zeros[1].first,zeros[1].second});
                ans.push_back({ones[0].first,ones[0].second,zeros[2].first,zeros[2].second,zeros[1].first,zeros[1].second});
                ans.push_back({ones[0].first,ones[0].second,zeros[2].first,zeros[2].second,zeros[0].first,zeros[0].second});
            }
            if(ones.size()==2){
                ans.push_back({ones[0].first,ones[0].second,zeros[1].first,zeros[1].second,zeros[0].first,zeros[0].second});
                ans.push_back({ones[1].first,ones[1].second,zeros[1].first,zeros[1].second,zeros[0].first,zeros[0].second});
            }
            if(ones.size()==3){
                ans.push_back({ones[0].first,ones[0].second,ones[1].first,ones[1].second,ones[2].first,ones[2].second});
            }
            if(ones.size()==4){
                ans.push_back({ones[3].first,ones[3].second,ones[1].first,ones[1].second,ones[2].first,ones[2].second});
                zeros.push_back({ones[1].first,ones[1].second});
                zeros.push_back({ones[2].first,ones[2].second});
                zeros.push_back({ones[3].first,ones[3].second});
                ans.push_back({ones[0].first,ones[0].second,zeros[0].first,zeros[0].second,zeros[1].first,zeros[1].second});
                ans.push_back({ones[0].first,ones[0].second,zeros[2].first,zeros[2].second,zeros[1].first,zeros[1].second});
                ans.push_back({ones[0].first,ones[0].second,zeros[2].first,zeros[2].second,zeros[0].first,zeros[0].second});
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        for(auto y:x) cout<<y+1<<" ";
        cout<<endl;
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}