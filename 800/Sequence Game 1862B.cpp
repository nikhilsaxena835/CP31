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
        cin >> n;
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        vector<ll> a;
        a.push_back(b[0]); 
        for (ll i = 1; i < n; i++) {
            if (b[i] >= b[i - 1]) {
                a.push_back(b[i]); 
            } else {
                a.push_back(b[i]); 
                a.push_back(b[i]); 
            }
        }

        cout << a.size() << endl;
        for (auto x : a) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
