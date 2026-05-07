#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int kth_score = a[k - 1]; 

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= kth_score && a[i] > 0)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}