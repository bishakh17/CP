#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<x<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int money25 = 0;
    int money50 = 0;
    for(int i = 0; i<n; i++){
        if(nums[i]==25) money25++;
        else if(nums[i]==50){
            if(money25){
                money25--;
                money50++;
            }
            else{
                cout("NO");
                return;
            }
        }
        else{
            if(!money25){
                cout("NO");
                return;
            }
            else{
                if(!money50){
                    money25 -= 3;
                    if(money25<0){
                        cout("NO");
                        return;
                    }
                }
                else{
                    money50--;
                    money25--;
                }
            }
        }
    }
    cout("YES");
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