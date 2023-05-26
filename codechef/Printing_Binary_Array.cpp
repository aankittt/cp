#include <iostream>
#include <unordered_map>
using namespace std;

void solve() {
    int n;
    string str;
    cin >> n;
    cin >> str;
    
    unordered_map<char, int> mp;
    
    for (char c : str) {
        mp[c]++;
    }
    
    int odd = 0;
    int even = 0;
    
    for (auto pair : mp) {
        if (pair.second % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }
    
    if (odd > 1) {
        cout << 0 << endl;
    } else if (odd == 1) {
        if (even == 0) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    } else {
        cout << 1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        solve();
        t--;
    }
    
    return 0;
}
