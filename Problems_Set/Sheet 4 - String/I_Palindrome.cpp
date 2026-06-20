#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string t = s;
    reverse(t.begin(), t.end());

    if(s == t)
        cout << "YES\n";
    else
        cout << "NO\n";



    return 0;
}