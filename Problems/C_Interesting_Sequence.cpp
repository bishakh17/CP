#include <iostream>
using namespace std;
int t;
long long n, x, ans;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        ans = n;
        while(ans and ans != x){
            n += (n & -n);
            ans = ans & n;
        }
        ans == x ? cout << n << '\n' : cout << "-1\n";
    }
    return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


// void solve(){
//     int n,x; cin>>n>>x;
//     if((n&x)!=x){cout(-1); return;}  
//     if(x==n){cout(x); return;}
//     int i = -1;
//     int j = 0;
//     while(n){
//         int prev = x&1;
//         if(prev) break;
//         while(n&1){
//             if(x&1){cout(-1); return;}
//             n>>=1;
//             x>>=1;
//             j++;
//             i = j;
//         }
//         n>>=1;
//         x>>=1;
//         j++;
//     }
//     if(n!=x){cout(-1); return;}
//     x<<=j;
//     int t = pow(2,i);
//     if(i==-1) t = 0;
//     cout(x+t);
// }

// int32_t main(){
//     fastio;
//     cin>>T;
//     while(T--){
//         solve();
//     }
//     return 0;
// }