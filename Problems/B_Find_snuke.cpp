#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int h,w; cin>>h>>w;
    vector<string> s(h);
    for(int i = 0; i<h; i++) cin>>s[i];
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            if(s[i][j]=='s'){
                int temp = 0;
                string gg = "snuke";
                vector<pair<int,int>> ans;
                for(int k = j; k<w; k++){
                    if(s[i][k]==gg[temp]){
                        ans.push_back({i,k});
                        temp++;
                    }
                    else break;
                    if(temp==5) for(int i = 0; i<5; i++) cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
                }
                ans.clear();
                temp = 0;
                for(int k = i; k<h; k++){
                    if(s[k][j]==gg[temp]){
                        ans.push_back({k,j});
                        temp++;
                    }
                    else break;
                    if(temp==5) for(int i = 0; i<5; i++) cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
                }
                ans.clear();
                temp = 0;
                for(int k = j; k>=0; k--){
                    if(s[i][k]==gg[temp]){
                        ans.push_back({i,k});
                        temp++;
                    }
                    else break;
                    if(temp==5) for(int i = 0; i<5; i++) cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
                }
                ans.clear();
                temp = 0;
                for(int k = i; k>=0; k--){
                    if(s[k][j]==gg[temp]){
                        ans.push_back({k,j});
                        temp++;
                    }
                    else break;
                    if(temp==5) for(int i = 0; i<5; i++) cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
                }
                ans.clear();
                temp = 0;
                for(int k = i, l = j; k<h && l<w; k++, l++){
                    if(s[k][l]==gg[temp]){
                        ans.push_back({k,l});
                        temp++;
                    }
                    else break;
                    if(temp==5) for(int i = 0; i<5; i++) cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
                }
                ans.clear();
                temp = 0;
                for(int k = i, l = j; k>=0 && l>=0; k--, l--){
                    if(s[k][l]==gg[temp]){
                        ans.push_back({k,l});
                        temp++;
                    }
                    else break;
                    if(temp==5) for(int i = 0; i<5; i++) cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
                }
                ans.clear();
                temp = 0;
                for(int k = i, l = j; k>=0 && l<w; k--, l++){
                    if(s[k][l]==gg[temp]){
                        ans.push_back({k,l});
                        temp++;
                    }
                    else break;
                    if(temp==5) for(int i = 0; i<5; i++) cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
                }
                ans.clear();
                temp = 0;
                for(int k = i, l = j; k<h && l>=0; k++, l--){
                    if(s[k][l]==gg[temp]){
                        ans.push_back({k,l});
                        temp++;
                    }
                    else break;
                    if(temp==5) for(int i = 0; i<5; i++) cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
                }
            }
        }
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}