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
        ll n,m,k;
        //cin >> n >> k;

        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b || (a - b) < (c - d)) {
            cout << -1 << endl;
        } else {
            long long moves = (d - b) + (a - c) + (d-b);
            cout << moves << endl;
        }
        
          
    }
    return 0;
}