#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvl = vector<vll>;
using vs = vector<string>;
void def_fun()
{

    ll r, c;
    cin >> r >> c;
    ll ans;
    if (r <= c)
    {
        // vertical lines
        if (c % 2 == 0)
        {
            ans = (c - 1) * (c - 1) + r;
        }
        else
        {
            ans = c * c - r + 1;
        }
    }
    else
    {
        // horizontal lines
        if (r % 2 == 0)
        {
            ans = r * r - c + 1;
        }
        else
        {
            ans = (r - 1) * (r - 1) + c;
        }
    }

    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        def_fun();
    }
    return 0;
}