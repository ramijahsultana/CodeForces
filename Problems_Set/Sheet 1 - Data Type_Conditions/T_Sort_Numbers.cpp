#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;
    int a, b, c;
    cin >> a >> b >> c;
    s.insert(a);
    s.insert(b);
    s.insert(c);

    for (auto i : s)
        cout << i << "\n";

    cout << "\n"
         << a << "\n"
         << b << "\n"
         << c << "\n";
         
    return 0;
}