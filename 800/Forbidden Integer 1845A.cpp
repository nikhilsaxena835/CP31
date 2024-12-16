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
        cin >> n >> m >> k;

        if( k!= 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for(ll i = 1; i <= n; i++)
            cout << "1" << " ";
            cout << endl;
        }
        else if (m == 1 || (m == 2 && n % 2 == 1)) 
        {
        cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << n / 2 << endl;
            cout << (n % 2 == 1 ? 3 : 2) << " ";
            for (int i = 0; i < n / 2 - 1; ++i) {
                cout << 2 << " ";
            }
            cout << endl;
        }
         
    }

    return 0;
}


/*

*/