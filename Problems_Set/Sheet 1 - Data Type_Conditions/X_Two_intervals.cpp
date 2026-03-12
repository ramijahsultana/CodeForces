#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int start = max(l1, l2);
    int end = min(r1, r2);

    if (start <= end)
        cout << start << " " << end << "\n";
    else
        cout << "-1\n";
        
    return 0;
}