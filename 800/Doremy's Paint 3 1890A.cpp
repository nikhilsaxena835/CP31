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

        ll temp;
        unordered_map<ll, ll> freq;
        
        for (ll i = 0; i < n; i++) {
            cin >> temp;
            freq[temp]++;
        }

        if (freq.size() > 2) {
            cout << "No" << endl;
            continue;
        }

        if(freq.size() == 1){
            cout << "Yes" << endl;
            continue;
        }

        ll odd_count = (n + 1) / 2; // ceil(n/2)
        ll even_count = n / 2;     // floor(n/2)

        bool is_good = false;
        for (auto &[num, count] : freq) {
            if (count == odd_count || count == even_count) {
                is_good = true;
                break;
            }
        }

        if (is_good)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
