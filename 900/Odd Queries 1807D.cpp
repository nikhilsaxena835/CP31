#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

ll maxl = INT_MIN;
ll minl = INT_MAX;
int ans = 0;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;
    while (t--) {
        ll n,q;
        cin >> n >> q;
        unordered_map<ll, ll> mpp;
        mpp[0] = 0;
        ll sum = 0;
        f(i,n)
        {
            ll temp;
            cin >> temp;
            sum+=temp;
            mpp[i+1] = sum;
        }
        ll l,r,k;
        f(i,q)
        {
            cin >> l >> r >> k;
            ll prev = mpp[r] - mpp[l-1];
            ll count = r-l+1;
            ll diff = (k*count) - prev;
            //cout << diff << k << count << endl;
            if((mpp[n]+diff)%2 == 1)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
        
        
    }
    return 0;
}