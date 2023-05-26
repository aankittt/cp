#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    string s;
    cin>>s;
     int num1 = stoi(s.substr(0, 2));
      int num2 = stoi(s.substr(3, 5));
      if(num1>12 && num2<=12) 
      cout<<"DD/MM/YYYY"<<endl;
      if(num1<=12 && num2>12) 
      cout<<"MM/DD/YYYY"<<endl;
      else if(num1<=12 && num2<=12)
       cout<<"Both"<<endl;
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