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

        ll curr = 0;
        ll ans = 0;
        for(ll i = n; i >=1 ; i--)
        {
            ll temp;
            cin >> temp;
            if(temp == 0)
            {
                curr++;
            }
            else{
                ans = max(ans, curr);
                curr = 0;
            }
        }
        ans = max(ans, curr);
        cout << ans;
        cout << endl;
          
    }
    return 0;
}