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

    map<char, int> mp;

    for(char c : s)
    {
        c = tolower(c);

        if(c == 'e' || c == 'g' || c == 'y' || c == 'p' || c == 't')
            mp[c]++;
    }

    cout << min({mp['e'], mp['g'], mp['y'], mp['p'], mp['t']}) << '\n';

    return 0;
}