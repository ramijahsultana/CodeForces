#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if(a[1] == -1 && a[n] == -1)
        {
            a[1] = 0;
            a[n] = 0;
        }
        else if(a[1] == -1 && a[n] != -1)
        {
            a[1] = a[n];
        }
        else if(a[1] != -1 && a[n] == -1)
        {
            a[n] = a[1];
        }
        for(int i = 2; i < n; i++)
        {
            if(a[i] == -1)
            {
                a[i] = 0;
            }
        }
        long long sum = 0;
        int val = 0;
        vector<int> b;
        for(int i = 1; i < n; i++)
        {
            val = a[i+1] - a[i];
            b.push_back(val);
            
        }
        for(auto &X : b)
        {
            sum += X;
        }
        cout << abs(sum) << "\n";
        for(int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}