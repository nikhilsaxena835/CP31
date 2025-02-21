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
        //unordered_map<ll, ll> mpp;
        bool choice = false;
        ll n = -1, m, k;
        ll x0;
        cin >> x0 >> n;

        ll d;
        if (n % 4 == 0)
            d = 0;
        else if (n % 4 == 1)
            d = n;
        else if (n % 4 == 2)
            d = -1;
        else
            d = -n - 1;

        if (x0 % 2 == 0)
            cout << (x0 - d) << endl;
        else
            cout << (x0 + d) << endl;
        

   }
        return 0;
    }
    
