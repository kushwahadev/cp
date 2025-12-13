#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;
void def_fun()
{
}
int main()
{
    int n;
    cin >> n;

    ull S = (n * 1LL * (n + 1)) / 2;

    if (S % 2 == 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    S = S / 2; // target sum

    set<int> st1, st2;

    for (int i = n; i >= 1; i--)
    {
        if (S > 0 && i <= S)
        {
            st1.insert(i);
            S -= i;
        }
        else
        {
            st2.insert(i);
        }
    }
    cout << "YES" << endl;
    cout << st1.size() << endl;
    for (auto x : st1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << st2.size() << endl;
    for (auto x : st2)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}