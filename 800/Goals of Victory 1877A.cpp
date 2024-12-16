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
        ll p;
        cin >> p;
        ll sum = 0;
        for(ll i = 0; i < p-1; i++)
        {
            ll temp;
            cin >> temp;

            sum += temp;
            
        }
        ll ans = (-1)*sum;
        cout << ans << endl;
    }

    return 0;
}
