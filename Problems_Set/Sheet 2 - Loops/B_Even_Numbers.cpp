#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
   bool ok = false;

    for(int i = 2; i <= n; i += 2)
    {
        cout << i << "\n";
        ok = true;
    }

    if(!ok)
    {
        cout << "-1\n";
    }
    return 0;
}