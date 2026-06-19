#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        bool good = false;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'))
            {
                good = true;
                break;
            }
        }
        
        if(good)
            cout << "Good\n";
        else
            cout << "Bad\n";
    }
}