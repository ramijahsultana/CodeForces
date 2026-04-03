#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int sz = s.size();
        if(sz > 10)
            cout << s[0] << sz - 2 << s[sz - 1] << "\n";
        else
            cout << s << "\n";
    }

    return 0;
}