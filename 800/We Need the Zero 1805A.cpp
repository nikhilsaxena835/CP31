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

        ll xor_sum = 0;
        for(ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            xor_sum = xor_sum ^ temp;
        }
        if( n % 2 == 0)
        {
            if(xor_sum == 0)
            cout << "0" << endl;
            else
            cout << "-1" << endl;
        }
        else{
            cout << xor_sum << endl;
        }

                
          
    }
    return 0;
}