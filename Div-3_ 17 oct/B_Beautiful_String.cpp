#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i])
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (isPalindrome(s)) {
           
            cout << 0 << "\n";
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(s[i] < s[i+1])
            {
            
            }
        }
       
        
    }

    return 0;
}
