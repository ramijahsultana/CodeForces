#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    string n;
    cin >> n;

    string c = n;
    reverse(c.begin(), c.end());

    int i = 0;
    while(i < c.size() && c[i] == '0') {
        i++;
    }

    string rev = c.substr(i);

    
    if(rev == "") rev = "0";

    cout << rev << "\n";

    if(rev == n)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
