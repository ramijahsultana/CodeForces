#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int freq[26] = {0};

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    string ans;
    ans.reserve(n);

    for (int i = 0; i < 26; i++)
    {
        ans.append(freq[i], char('a' + i));
    }

    cout << ans;
    return 0;
}