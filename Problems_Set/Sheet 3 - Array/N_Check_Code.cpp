#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    string S;
    cin >> S;

    bool ok = true;

    for (int i = 0; i < S.size(); i++)
    {
        if (i == A)
        {
            if (S[i] != '-')
            {
                ok = false;
            }
        }
        else
        {
            if (!(S[i] >= '0' && S[i] <= '9'))
            {
                ok = false;
            }
        }
    }
    if (ok)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}