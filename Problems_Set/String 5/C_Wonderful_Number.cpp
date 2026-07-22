#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    bool odd = false;

    if (n % 2 != 0)
        odd = true;

    string s = "";

    while (n > 0)
    {
        s += (n % 2) + '0';
        n /= 2;
    }

    string t = s;
    reverse(t.begin(), t.end());
    bool bin = false;

    if (t == s)
        bin = true;

    if (odd && bin)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}