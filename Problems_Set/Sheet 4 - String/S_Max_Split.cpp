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

    vector<string> ans;

    int balance = 0;
    string temp;

    for(char c : s)
    {
        temp += c;

        if(c == 'R')
            balance++;
        else
            balance--;

        if(balance == 0)
        {
            ans.push_back(temp);
            temp.clear();
        }
    }

    cout << ans.size() << '\n';

    for(string x : ans)
        cout << x << '\n';

    

    return 0;
}