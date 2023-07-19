#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k,x; cin>>n>>k>>x;
    string s; cin>>s;
    if(k==0){
        string ans = "";
        for(int i=0; i<n; i++){
            if(s[i]=='*') continue;
            ans+=s[i];
        }
        cout<<ans<<endl;
        return;
    }
    vector<int> v;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='a'){
            if(cnt) v.push_back(cnt);
            cnt = 0;
        }
        else cnt+=k;
    }
    if(cnt) v.push_back(cnt);
    int m = v.size();
    if(m)v[m-1]++;
    for(int i = m-2; i>=0; i--){
        if(v[i+1]>=x){
            v[i] = x+1;
            continue;
        }
        v[i]++;
        int gg = x/v[i+1];
        if(x%v[i+1]) gg++;
        if(v[i]>=gg) v[i] = x+1;
        else v[i]*=v[i+1];

    }
    for(int i = 0; i<m-1; i++){
        if(v[i+1]>x){
            v[i] = 0;
            continue;
        }
        int temp = x/v[i+1];
        if(x%v[i+1]==0) temp--;
        v[i] = temp;
        x-=temp*v[i+1];
    }
    if(m)v[m-1] = x-1;
    string ans = "";
    int i = 0;
    int j = 0;
    while(i<n){
        if(s[i]=='a'){
            ans+='a';
            i++;
        }
        else{
            while(i<n and s[i]=='*'){
                i++;
            }
            ans.append(v[j], 'b');
            j++;
        }
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