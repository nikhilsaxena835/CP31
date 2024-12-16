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
        cin >> n;

        ll sum = 0;
        ll negatives = 0;
        for(ll i = n; i >=1 ; i--)
        {
            ll temp;
            cin >> temp;
            cout << n+1-temp << " ";
        }
        cout << endl;
          
    }
    return 0;
}