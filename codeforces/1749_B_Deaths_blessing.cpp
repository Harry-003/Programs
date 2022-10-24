#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    long long asum = 0, bsum = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        asum += a[i];
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> b[i];
        bsum += b[i];
    }
    long long maxb = *max_element(b.begin(), b.end());
    cout << (asum + bsum) - maxb << "\n";
}
int main()
{

    long long t;
    t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}