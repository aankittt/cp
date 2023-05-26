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
     int n = s.size();
        set<int> st;
        int mid = int(n/2);
        for(int i=0; i<n; i++){
            if(n%2 != 0 && i == mid){
                continue;
            }
            st.insert(s[i]);
        }
        int temp = st.size();

            if(temp>=2){
                py;
            }
            else{
                pn;
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