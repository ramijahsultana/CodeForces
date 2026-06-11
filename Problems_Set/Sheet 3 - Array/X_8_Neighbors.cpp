#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x, y;
    cin >> x >> y;

    x--;
    y--;

    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if (a[nx][ny] == '.')
            {
                cout << "no\n";
                return 0;
            }
        }
    }

    cout << "yes\n";
}