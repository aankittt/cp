#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int n,k;
    cin>>n>>k;
    ll od=(n+1)/2;

    if(od<k){
    pn;
    return ;
    }

    if(2*k>n)
    {
        pn;
        return ;
    }

    if((od-k)%2)
    pn;
    else
    py;

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