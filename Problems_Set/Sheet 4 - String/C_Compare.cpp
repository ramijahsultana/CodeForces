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
    if(s < t)
        cout << s << "\n";
    else
        cout << t << "\n";

    return 0;
}