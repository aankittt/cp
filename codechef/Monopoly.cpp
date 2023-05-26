#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int p,q,r,s;
    cin>>p>>q>>r>>s;

    if(p>q+r+s)
    py;
    else if(q>p+r+s)
    py;
    else if(r>p+q+s)
    py;
    else if(s>p+q+r)
    py;
    else
    pn;

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