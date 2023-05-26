    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define py cout << "Yes" << endl
    #define pn cout << "No" << endl
    #define fr (x) for (int i = 0; i < x; i++)
    
    bool check(int no,vector<int> arr)
    {
        int i=0;
        int j=arr.size()-1;
        while(j-i>=2)
        {
            if(arr[j]+arr[i]==no)
            return 1;
            else if(arr[j]+arr[i]>no)
            {
                j--;
            }
            else
            i++;
        }
        return false;

    }

    void solve()
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

            for(int i=1;i<n-1;i++)
            {
                if(check(2*arr[i],arr))
                {
                    pn;
                    return;
                }

            }
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


