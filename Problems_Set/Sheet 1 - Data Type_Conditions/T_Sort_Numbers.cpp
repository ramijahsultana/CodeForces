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

    vector<int> v = {a, b, c};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << "\n";

    cout << "\n";

    cout << a << "\n"
         << b << "\n"
         << c << "\n";
         
    return 0;
}