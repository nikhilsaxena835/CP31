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

        vector<ll> a (n);
        f(i,n)
        {
            cin >> a[i];
            if(a[i] != 0)
            flag = false;
        }
        if(flag)
        {
            cout << "0" << endl;
            continue;
        }
        if(n%2 == 0)
        {
            cout << "2" << endl;
            cout << "1 " << n << endl;
            cout << "1 " << n << endl;
        }
        else{
            cout << "4" << endl;
            cout << "1 " << n-1 << endl;
            cout << "1 " << n-1 << endl;
            cout << n-1 <<" "<< n << endl;
            cout << n-1 <<" "<< n << endl;
        }


        //cout << ans+k << endl;
        
        


        
        
    }
    return 0;
}