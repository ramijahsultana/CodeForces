#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    cout << s.size() << " " << t.size() << "\n";
    cout << s + t << "\n";
    swap(s[0], t[0]);
    cout << s << " " << t << "\n";

    return 0;
}