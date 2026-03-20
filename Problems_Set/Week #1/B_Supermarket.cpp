#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    double min_price = 1e18;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        double price = (double)a / b;
        min_price = min(min_price, price);
    }

    cout << fixed << setprecision(8) << min_price * m << "\n";

    return 0;
}
