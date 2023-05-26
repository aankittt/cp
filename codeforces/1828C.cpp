#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000000 + 7
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

int bs(vector<int> &b, int no)
{
    int l = 0;
    int r = b.size() - 1, m;
    while (l < r)
    {
        m = l + (r - l) / 2;
        if (b[m] <= no)
        {
            l = m + 1;
        }
        else
            r = m;
    }
    return l;
}
int solve()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    sort(arr1.rbegin(), arr1.rend());
    sort(arr2.rbegin(), arr2.rend());
    long long ans = 1;
    

    for (int i = 0; i < n; i++)
    {
        
    }

    cout << ans << endl;
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