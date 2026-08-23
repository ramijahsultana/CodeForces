#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;
    if(s.size()%2 == 0)
    {
        int c = s.size()/2;
        cout << c << endl;
    }
    else
    {
        int c = s.size()/2;
        cout << c+1 << endl;
    }

    return 0;
}