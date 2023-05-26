#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

        ll p,q;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==1)
            {
                p=p+i+1;
            }
            else
            q=q+i+1;

        }
        if(p>q)
        cout<<p-q<<endl;
        else
        cout<<q-p<<endl;
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