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
        cin >> n ;
        ll sum = 0, temp;
        for(ll i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }
        //cout << sum << endl;
        if(sum % 2 == 0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
         
    }

    return 0;
}
