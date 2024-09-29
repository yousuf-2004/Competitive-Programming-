#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    else if (n % k == 0)
    {
        cout << (n / k) + 1 << endl;
    }
    else
    {
        cout << (n / k) + 2 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
