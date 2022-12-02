#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    vector<vector<char>> nums(4,vector<char>(4));
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cin>>nums[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int n = 0;
            int m = 0;
            if(nums[i][j]=='#') n++;
            else m++;
            if(nums[i][j+1]=='#') n++;
            else m++;
            if(nums[i+1][j]=='#') n++;
            else m++;
            if(nums[i+1][j+1]=='#') n++;
            else m++;
            if(abs(n-m)>=2){
                cout("YES");
                return;
            }
        }
    }
    cout("NO");
    return;
}

int main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}