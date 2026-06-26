#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        string t;
        cin >> t;
        if (t == "pop_back")
        {
            s.pop_back();
        }
        else if (t == "front")
        {
            cout << s.front() << '\n';
        }
        else if (t == "back")
        {
            cout << s.back() << '\n';
        }
        else if (t == "sort")
        {
            int l, r;
            cin >> l >> r;

            if (l > r)
                swap(l, r);

            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (t == "reverse")
        {
            int l, r;
            cin >> l >> r;

            if (l > r)
                swap(l, r);

            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (t == "print")
        {
            int pos;
            cin >> pos;

            cout << s[pos - 1] << '\n';
        }
        else if (t == "substr")
        {
            int l, r;
            cin >> l >> r;

            if (l > r)
                swap(l, r);

            cout << s.substr(l - 1, r - l + 1) << '\n';
        }
        else if (t == "push_back")
        {
            char x;
            cin >> x;

            s.push_back(x);
        }
    }

    return 0;
}