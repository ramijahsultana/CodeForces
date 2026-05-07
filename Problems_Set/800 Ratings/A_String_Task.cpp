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
    string t;
    for(char c : s)
    { 
        t.pb(tolower(c));
    }

    for(char c : t)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            continue;
        }
        else
        {
            cout << "." << c;

        }
        
    }

    return 0;
}