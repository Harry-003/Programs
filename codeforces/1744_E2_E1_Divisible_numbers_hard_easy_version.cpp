#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long ab = a * b;
    if (ab == 1)
    {
        cout << "2 2"
             << "\n";
        return;
    }
    vector<long long> Adivs, Bdivs;
    for (long long i = 1; i * i <= a; i++)
    {
        if (a % i == 0) Adivs.push_back(i), Adivs.push_back(a / i);
    }
    for (long long i = 1; i * i <= b; i++)
    {
        if (b % i == 0) Bdivs.push_back(i), Bdivs.push_back(b / i);
    }
    for(long long i=0; i<Adivs.size(); i++)
    {
        for(long long j=0; j<Bdivs.size(); j++)
        {
            long long xs = Adivs[i] * b / Bdivs[j];
            long long ys = a / Adivs[i] * Bdivs[j];
            if (a / xs < c / xs && b / ys < d / ys)
            {
                cout << c / xs * xs << " " << d / ys * ys << "\n";
                return;
            }
        }
    }
    cout << "-1 -1\n";
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