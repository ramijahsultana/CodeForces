#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    int pos = s.find('/');
    string query = s.substr(pos + 1);


    for (char &c : query) {
        if (c == '=' || c == '&')
            c = ' ';
    }
    
    stringstream ss(query);
    string key, value;

    return 0;
}