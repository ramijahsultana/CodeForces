#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i; 
        int digit_sum = 0;

        while (x != 0)
        {
            digit_sum += x % 10;
            x /= 10;
        }

        if (digit_sum >= a && digit_sum <= b)
        {
            sum += i;
        }
    }

    cout << sum << "\n";

    return 0;
}