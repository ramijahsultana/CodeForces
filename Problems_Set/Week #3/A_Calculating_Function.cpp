#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int rating;
        cin >> rating;
        if (rating >= 1000) {
            count++;
        }
    }
    
    cout << count << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}