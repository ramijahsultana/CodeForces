#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool is_prime(ll n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (is_prime(n))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}