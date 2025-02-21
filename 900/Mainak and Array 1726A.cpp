#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;   
    while (t--) {
        unordered_map<ll, ll> mpp;
        bool choice = false;
        ll n, x = -1, m;
        cin >> n;
        ll ans = INT_MIN;

        vector<ll> vec (n);
        for(ll i = 0; i < n; i++)
            cin >> vec[i];
    

       
        ll mini = LLONG_MIN;
        for (ll i = 0; i < n-1; i++) {
            mini = max(mini, vec[n-1] - vec[i]);
        }

        ll maxi = LLONG_MIN;
        for (ll i = 1; i < n; i++) {
            maxi = max(maxi, vec[i] - vec[0]);
        }

        for(ll i = 0; i < n; i++)
        {
            ans = max(ans, (vec[i]-vec[( i+1 ) % n]));
        }
        //cout << "n" << n << endl;
        ans = max({ans, maxi, mini});
        
        cout << ans << endl; 
        
    }
    return 0;
}