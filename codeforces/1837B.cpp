#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int maxi=1;
    int count=1;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            maxi=max(maxi,count);
            count=1;
        }
    }
    maxi=max(maxi,count);
    cout<<maxi+1<<endl;

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