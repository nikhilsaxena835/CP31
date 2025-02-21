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
        cin >> n;
        bool flag = true;
        ll ans = 0;
        ll prev = 0;
        for(int i = 1; i <= n; i++)
        {
            ll temp;
            cin >> temp;
        
            ans = gcd(ans, abs(i-temp));
        }
        cout << ans << endl;

       


    }
    return 0;
}