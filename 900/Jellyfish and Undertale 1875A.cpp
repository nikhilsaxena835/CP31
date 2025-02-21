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
        cin >> x >> k >> n;

        ll ans = 0;

        vector<ll> a (n);
        f(i,n)
        {
            cin >> a[i];
            if(a[i] >= x)
            a[i] = x-1;
            ans+= a[i];
        }


        cout << ans+k << endl;
        
        


        
        
    }
    return 0;
}