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
    string t;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '\\')
            break;
        t.pb(s[i]);
    }

    cout << t << "\n";


    return 0;
}