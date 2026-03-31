#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool isLucky(int n)
{
    while (n > 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    bool ok = false;
    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            ok = true;
        }
    }
    if (ok)
        cout << "\n";
    else
        cout << -1;
    return 0;
}