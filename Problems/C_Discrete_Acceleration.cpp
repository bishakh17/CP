#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,l; cin>>n>>l;
    vector<double> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    double ans = -1;
    double high = l; double low = 0;
    while(low<=high){
        double mid = (low+high)/2;
        double posa = 0; double posb = l;
        double va = 1; double vb = 1;
        double temp = mid;
        int i = 0;
        while(temp){
            if(i>=n){
                posa += temp*va;
                temp = 0;
                break;
            }
            double gg = (a[i]-posa)/va;
            if(gg<=temp){
                posa = a[i];
                temp-=gg;
                va++;
                i++;
            }
            else{
                posa+=temp*va;
                temp = 0;
            }
        }
        i = n-1; temp = mid;
        while(temp){
            if(i<0){
                posb -= temp*vb;
                temp = 0;
                break;
            }
            double gg = (posb-a[i])/vb;
            if(gg<=temp){
                posb = a[i];
                temp-=gg;
                vb++;
                i--;
            }
            else{
                posb-=temp*vb;
                temp = 0;
            }
        }
        if(abs(posa-posb)<=1e-5){
            ans = mid;
            break;
        }
        else if(posa<posb){
            low = mid;
        }
        else high = mid;

    }

    cout<<fixed<<setprecision(16)<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}