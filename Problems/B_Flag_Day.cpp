#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> ans(n+1,0);

    for(int i = 0; i<m; i++){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> temp(4,0);
        if(!ans[a] and !ans[b] and !ans[c]){
            ans[a] = 1;
            ans[b] = 2;
            ans[c] = 3; 
        }
        else if(ans[a]){
            temp[ans[a]] = 1;
            for(int i = 1; i<4; i++){
                if(!temp[i]){
                    ans[b] = i;
                    temp[i] = i;
                    i++;
                    while(i<4){
                        if(!temp[i]){
                            ans[c] = i;
                            temp[i] = 1;
                            break;
                        }
                        i++;
                    }
                    break;
                }
            }
        }
        else if(ans[b]){
            temp[ans[b]] = 1;
            for(int i = 1; i<4; i++){
                if(!temp[i]){
                    ans[a] = i;
                    temp[i] = i;
                    i++;
                    while(i<4){
                        if(!temp[i]){
                            ans[c] = i;
                            temp[i] = 1;
                            break;
                        }
                        i++;
                    }
                    break;
                }
            }
        }
        else if(ans[c]){
            temp[ans[c]] = 1;
            for(int i = 1; i<4; i++){
                if(!temp[i]){
                    ans[b] = i;
                    temp[i] = i;
                    i++;
                    while(i<4){
                        if(!temp[i]){
                            ans[a] = i;
                            temp[i] = 1;
                            break;
                        }
                        i++;
                    }
                    break;
                }
            }
        }
    }
    for(int i = 1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}