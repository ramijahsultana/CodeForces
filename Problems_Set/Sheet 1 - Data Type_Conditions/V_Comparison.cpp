#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    char c;
    cin >> a >> c >> b;
    bool ans = false;
    if (c == '>' && a > b)
        ans = true;
    else if (c == '<' && a < b)
        ans = true;
    else if (c == '=' && a == b)
        ans = true;

    if (ans == true)
        cout << "Right\n";
    else
        cout << "Wrong\n";

    return 0;
}