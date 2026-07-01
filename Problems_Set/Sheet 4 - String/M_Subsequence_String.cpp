#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t = "hello";
    string s;
    cin >> s;
    int j = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == t[j])
        {
            j++;
        }
    }

    if(j == t.size())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    


    return 0;
}