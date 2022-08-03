#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int max1 = 0;
    int max2 = 0;
    vector<int> map(n+1,0);
    for(int i = 0; i<n; i++){
        map[nums[i]]++;
    }
    for(int i = 0; i<n+1; i++){
        if(max1<map[i]){
            max2 = max1;
            max1 = map[i];
        }
        else if(max2<map[i]){
            max2 = map[i];
        }
    }
    int temp = ceil((double)max1/2);
    int ans = max(max2,temp);
    cout<<ans<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}