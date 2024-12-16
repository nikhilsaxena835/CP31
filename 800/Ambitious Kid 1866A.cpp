#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    //cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll least = INT_MAX;
        for(ll i = 1; i <= n; i++)
        {
            ll temp;
            cin >> temp;
            temp = abs(temp);
            if(temp < least)
            least = temp;
        }

        cout << least << endl;
    }

    return 0;
}
