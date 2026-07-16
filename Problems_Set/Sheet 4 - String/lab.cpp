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

    bool letter = false;
    bool digit = false;

    for(int i=0; i<s.size(); i++)
    {
        if(isalpha(s[i]))
            letter = true;
        else if(isdigit(s[i]))
            digit = true;
        if(letter && digit)
            break;
    }

    if(letter && digit)
        cout << "Valid Password\n";
    else
        cout << "Invalid Password\n";

    return 0;
}
