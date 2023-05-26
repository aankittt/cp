#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int x,k;
    cin>>x>>k;
    if(x%k==0)
    {
        cout<<2<<endl;
        cout<<x-1<<" "<<1;
    }
    else
    {
        cout<<1<<endl;
        cout<<x;
    }
    cout<<endl;
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