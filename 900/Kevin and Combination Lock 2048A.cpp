#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

ll maxl = INT_MIN;
ll minl = INT_MAX;
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;

    while (t--) {
        ll n,k,x;
        cin >> n;
        bool flag = true;
        ll ans = 0;
        ll prev = 0;
        while(n>0)
        {
            ll digit = n%10;
            n = n/10;
            if(digit == 3 && prev == 3)
            {}
            else
            ans = ans*10 + digit;
        }

        if(ans % 33 == 0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;


    }
    return 0;
}