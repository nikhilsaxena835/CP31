#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n ;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = INT_MAX;
        bool flag = false;
        for(ll i = 1; i < n; i++)
        {
            if(a[i-1] <= a[i])
            {
                ll k = (a[i] - a[i-1])/2;
                ans = min(ans, k);
            }
            else{
                flag = true;
            }
        }
        if(flag)
        cout << "0" << endl;
        else
        cout << ans+1 << endl;
         
    }

    return 0;
}
