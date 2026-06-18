#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while(cin >> s)
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = tolower(s[i]);
            else if(s[i] >= 'a' && s[i] <= 'z')
                s[i] = toupper(s[i]);
            else if(s[i] == ',')
                s[i] = ' ';        
        }
        cout << s << endl;
    }

    return 0;
}