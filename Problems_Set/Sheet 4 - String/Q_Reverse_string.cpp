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

    string word = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            reverse(word.begin(), word.end());
            cout << word << ' ';
            word = "";
        } else {
            word += s[i];
        }
    }

    reverse(word.begin(), word.end());
    cout << word;


    return 0;
}