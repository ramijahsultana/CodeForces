#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        dragons.push_back({x, y});
    }

    sort(dragons.begin(), dragons.end());

    for (auto dragon : dragons)
    {
        int x = dragon.first;
        int y = dragon.second;

        if (s <= x)
        {
            cout << "NO\n";
            return 0;
        }

        s += y;
    }

    cout << "YES\n";

    return 0;
}