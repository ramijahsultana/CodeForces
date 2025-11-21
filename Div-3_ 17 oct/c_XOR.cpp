#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        ll x = a ^ b;
        if (x <= a) {
            cout << 1 << "\n" << x << "\n";
            continue;
        }

        ll x1 = 1;
        ll new_a = a ^ x1;
        ll x2 = new_a ^ b;

        if (x2 <= new_a) {
            cout << 2 << "\n" << x1 << " " << x2 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}
