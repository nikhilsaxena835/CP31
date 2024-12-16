#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        bool flag = true;
        ll temp = -5, prev;
        for(ll i = 0; i < n; i++)
        {
            prev = temp;
            cin >> temp;
            if(temp < prev)
            flag = false;

        }
        if(k >= 2 || flag == true)
        cout << "YES" << endl;
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}