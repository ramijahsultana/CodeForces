#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);   
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for(int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                swap(a[i], b[i]);
            }
        }   
        for(int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        for(int i=0; i<n; i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
        // for(int i = 1; i < n; i++)
        // {
        //     a[i] ^= a[i-1];
        //     b[i] ^= b[i-1];
        // }
        int xor_a = 0;
        int xor_b = 0; 
        for(int i = 0; i<n; i++)
        {
            xor_a ^= a[i];
            xor_b ^= b[i];
        }

        // if (xor_a > xor_b)
        //     cout << "Ajisai\n";
        // else if (xor_b > xor_a)
        //     cout << "Mai\n";
        // else
        //     cout << "Tie\n";   
        //cout << xor_a << " " << xor_b << "\n";
    }

    return 0;
}