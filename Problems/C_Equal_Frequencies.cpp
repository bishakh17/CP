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
    string s; cin>>s;
    string t = s;
    int ans_k;
    int ans = INT64_MAX;
    vector<pair<int,char>> freq(26, {0,'?'}); 
    for(int i = 0; i<26; i++){
        freq[i].second = char(i+'a');
    }
    for(int i = 0; i<n; i++){
        freq[s[i]-'a'].first++;
    }
    sort(freq.begin(), freq.end(), greater<pair<int,char>>());
    for(int k = 1; k<=26; k++){
        if(n%k != 0) continue;
        int m = n/k;
        int count = 0;
        for(int i = 0; i<k; i++){
            if(freq[i].first < m) count += m - freq[i].first;
        }
        if(count < ans){
            ans = count;
            ans_k = k;
        }
    }
    int m = n/ans_k;
    unordered_map<char, int> mp;
    vector<pair<char,int>> v;
    unordered_set<char> st;
    for(int i = 0; i<ans_k; i++){
        mp[freq[i].second] = freq[i].first;
        if(freq[i].first<m) v.push_back({freq[i].second, m-freq[i].first});
        st.insert(freq[i].second);
    }
    int j = 0;
    for(int i = 0; i<n; i++){
        if(mp[s[i]]<=m and st.find(s[i])!=st.end()) continue;
        while(v[j].second==0)j++;
        mp[s[i]]--;
        mp[v[j].first]++;
        t[i] = v[j].first;
        v[j].second--;
    }
    cout<<ans<<endl;
    cout<<t<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}