#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve() {
    int n;
    string str;
    cin >> n;
    cin >> str;
    
    unordered_map<int, int> mp;
    
    for (int c : str) {
        mp[c]++;
    }
    
    ll odd = 0;
    ll even = 0;
    
    for (auto it : mp) {
        if (it.second % 2 != 0) {
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcase = 0;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}