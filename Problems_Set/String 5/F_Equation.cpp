#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    ll val = 0;
    for(int i=2; i<=y; i+=2)
    {
        val += pow(x, i);
    }

    cout << val << "\n";

    return 0;
}