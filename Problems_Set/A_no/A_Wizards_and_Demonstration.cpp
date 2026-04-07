#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    double x;
    cin >> n >> m >> x;

    int r = ceil(n*(x / 100.0));
    int ans = r - m;
   
    if(ans < 0)
        ans = 0;
    cout << ans << "\n";

    return 0;
}