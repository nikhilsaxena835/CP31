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
      
        if (n % 2 == 1 || n == 2) {
            cout << -1 << endl;
            continue;
        }

        ll max_buses = n / 4;

        ll min_buses;
        if (n % 6 == 0) {
            min_buses = n / 6;
        } else if (n % 6 == 2) {
            min_buses = n/ 6 + 1; 
        } else if (n % 6 == 4) {
            //min_buses = (n - 8) / 6 + 2; 
            min_buses = n/6 + 1;
        }

        cout << min_buses << " " << max_buses << endl;
        
        
    }
    return 0;
}