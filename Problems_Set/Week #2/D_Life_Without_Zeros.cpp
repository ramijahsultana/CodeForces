#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int a,b;
    cin >> a >> b;
    string s,t;
    s = to_string(a);
    t = to_string(b);
    int c = a+b;
    int sv = 0, tv = 0;
    string u = to_string(c);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '0')
        {
           s.erase(i,1);
           i--;
        }
    }
    for(int i=0; i<t.length(); i++)
    {
        if(t[i] == '0')
        {
            t.erase(i,1);
            i--;
        }
    }
    for(int i=0; i<u.length(); i++)
    {
        if(u[i] == '0')
        {
           u.erase(i,1);
              i--;
        }
    }
    if(stoll(s)+stoll(t) == stoll(u))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}