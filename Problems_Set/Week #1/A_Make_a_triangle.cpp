#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;

    v.pb(a);
    v.pb(b);
    v.pb(c);

    sort(v.begin(), v.end());

    if (v[0] + v[1] > v[2])
        cout << "0\n";
    else
        cout << v[2] - (v[0] + v[1]) + 1 << "\n";

    return 0;
}