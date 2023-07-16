#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    int n = s.size();
    string ans(n, '0');
    vector<int> mp(26, 0);
    for(int i=0; i<n; i++){
        mp[s[i]-'a']++;
    }
    int i = 0; int j = n-1;
    int k = 0;
    while(i<=j){
        while(mp[k]==0) k++;
        if(mp[k]>1){
            ans[i] = ans[j] = k+'a';
            mp[k]-=2;
            i++; j--;
            continue;
        }
        ans[j] = k+'a';
        mp[k]--;
        if(i==j) break;
        j--;
        k++;
        int gg = i;
        while(k<26){
            if(mp[k]){
                ans[i] = k+'a';
                mp[k]--;
                i++;
            }
            else k++;
        }
        if(j!=gg and ans[j]==ans[gg]){
            int temp = j+1-gg;
            if(temp%2==0){
                temp = temp/2;
            }
            else{
                temp = temp/2 + 1;
            }
            temp+=gg;
            swap(ans[j+1],ans[temp]);
        }
        break;
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