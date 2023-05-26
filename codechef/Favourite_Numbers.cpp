#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int a;
    cin>>a;
    if(a%7==0 && a%2==0)
    cout<<"Alice"<<endl;
    else if(a%9==0 && a%2==1)
    cout<<"Bob"<<endl;
    else
    cout<<"Charlie"<<endl;
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