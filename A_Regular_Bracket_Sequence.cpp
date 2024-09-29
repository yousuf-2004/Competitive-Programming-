#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.size() % 2 == 0 && s[0] != ')' && s.back() != '(')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
}