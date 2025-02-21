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
      
        vector<ll> vec (n,0);
        for (ll i = 0; i < n; i++) {
            cin >> vec[i];
        }
        
        bool all_zero = true;
        for (ll i = 0; i < n; i++) {
            if (vec[i] != 0) {
                all_zero = false;
                break;
            }
        }
        if (all_zero) {
            cout << "0" << endl;
            continue;
        }

        ll left = -1, right = -1;
        for (ll i = 0; i < n; i++) {
            if (vec[i] != 0) {
                if (left == -1) left = i;
                right = i;
            }
        }
        bool contiguous = true;
        for (ll i = left; i <= right; i++) {
            if (vec[i] == 0) {
                contiguous = false;
                break;
            }
        }
        if (contiguous) {
            cout << "1" << endl;
        } else {
            cout << "2" << endl;
        }
        
    }
    return 0;
}