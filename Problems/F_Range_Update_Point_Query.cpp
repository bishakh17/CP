//1. DSU(patch compression) to keep track of the next index that can be updated as its parent(pretty smart use of dsu)


// #include <bits/stdc++.h>
// using namespace std;
// int a[200020], b[200020];
// int find(int x)
// {
//     return b[x] == x ? x : b[x] = find(b[x]);
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             b[i] = i;
//         }
//         b[n + 1] = n + 1;
//         while (q--)
//         {
//             int op, l, r;
//             cin >> op >> l;
//             if (op == 1)
//             {
//                 cin >> r;
//                 for (int i = l; i <= r; i++)
//                 {
//                     i = find(i);
//                     if (i > r)
//                         break;
//                     int ans = 0;
//                     while (a[i])
//                         ans += a[i] % 10, a[i] /= 10;
//                     a[i] = ans;
//                     if (a[i] < 10)
//                         b[i] = i + 1;
//                 }
//             }
//             else
//                 cout << a[l] << endl;
//         }
//     }

//     return 0;
// }


#include <bits/stdc++.h>

typedef long long LL;

int n, m, k;

void solve()
{
    std::cin >> n >> m;
    std::vector<int> a(n + 1), b(n + 10, 0);

    for(int i = 1;i <= n;i ++) std::cin >> a[i];

    int left = 1e9, right = -1e9;
    while(m --)
    {
        int l, r, x;
        std::cin >> k;
        if(k == 1)
        {
            std::cin >> l >> r;
            b[l] ++, b[r + 1] --;
            left = std::min(left, l);
            right = std::max(right, r);
        }
        else
        {
            std::cin >> x;
            if(a[x] >= 10 && x >= left && x <= right)
            {   
                for(int i = left;i <= right;i ++)
                {
                    b[i] += b[i - 1];
                    int c = b[i];
                    if(c && a[i] >= 10){
                        while(c && a[i] >= 10)
                        {
                            int t = a[i], res = 0;
                            while(t) res += t % 10, t /= 10;
                            a[i] = res;
                            c --;
                        }
                    }
                }

                for(int i = left;i <= right + 1;i ++) b[i] = 0;
                left = 1e9, right = -1e9;
            }
            std::cout << a[x] << '\n';
        }
    }
}

int main()
{
   std::ios::sync_with_stdio(false);
   std::cin.tie(nullptr); 
   std::cout.tie(nullptr);

   int t = 1;
   std::cin >> t;

   while(t --) solve();
   return 0;
}
