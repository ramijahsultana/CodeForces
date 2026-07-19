#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    size_t pos = 0;

    while ((pos = s.find("EGYPT", pos)) != string::npos)
    {
        s.replace(pos, 5, " ");
        pos++;
    }

    cout << s << '\n';

    return 0;
}