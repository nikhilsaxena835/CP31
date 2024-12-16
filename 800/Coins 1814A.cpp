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
        cin >> n >> k;

        ll curr = 0;
        ll ans = 0;
        bool flag = false;

        if (n % 2 == 0 || (n - k >= 0 && (n - k) % 2 == 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
       // for(ll i = n; i >=1 ; i--)
        //{
         //   ll temp;
          //  cin >> temp;
            

        //}
        
          
    }
    return 0;
}