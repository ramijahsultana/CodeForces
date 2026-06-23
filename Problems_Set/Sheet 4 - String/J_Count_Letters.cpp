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
    sort(s.begin(), s.end());

    map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }

    for (auto it : freq)
    {
        cout << it.first << " : " << it.second << "\n";
    }

   

    return 0;
}