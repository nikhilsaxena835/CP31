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

        vector<ll> a (n);
        for(ll i = 1; i <= n; i++)
        {
            cin >> a[i-1];
        }
        sort(a.begin(), a.end());
      
        if(a[0] == a[n-1])
        {
            cout << "-1" << endl;
            continue;
        }
        ll it = 0;
		while (a[it] == a[0])
        it++;

		cout << it << " " << n - it << "\n";
		for (ll j = 0; j < it; ++j) cout << a[j] << " ";
        cout << endl;
		for (ll j = it; j < n; ++j) cout << a[j] << " ";

        cout << endl;
    }

    return 0;
}
