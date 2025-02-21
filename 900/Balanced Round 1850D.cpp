#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

ll maxl = INT_MIN;
ll minl = INT_MAX;
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;

    while (t--) {
        ll n,k,x;
        cin >> n >> k;
        bool flag = true;
        ll ans = 1;
        vector<ll> a(n);
        f(i, n)
        cin >> a[i];

        sort(a.begin(), a.end());
        ll prev = 0;
        ll best = 0;
        for(ll i = 1; i < n; i++)
        {
            
            if(abs(a[i] - a[i-1]) <= k)
            ans++;
            else{
                //cout << a[i]<< endl;
                flag = false;
                best = max(best, ans);
                ans = 1;
            }
        }
        best = max(best,ans);
        if(flag)
        cout << "0" << endl;
        else
        cout << n-best << endl;



    }
    return 0;
}