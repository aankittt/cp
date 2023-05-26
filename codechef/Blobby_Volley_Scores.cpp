#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counta=0;
    int countb=0;

    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
        
            if(s[i]=='A')
            counta++;
            else
            countb++;
        
        }
    }
    if(s[0]=='A')
    counta++;

    cout<<counta<<" "<<countb;

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