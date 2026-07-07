#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    int cnt = 0;
   for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            if (i == 0 || !isalpha(s[i - 1]))
                cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}