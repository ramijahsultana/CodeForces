#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n-1; j++)
        {
            if(s[i] < s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << s[i];
    }

    return 0;
}