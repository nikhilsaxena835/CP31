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
        cin >> n >> k >> x;

        

        ll sum = 0, rsum = 0;
        ll tot = (n*(n+1))/2;
        
        sum = ((n-k)*(n-k+1))/2;
        sum = tot - sum;

        rsum = (k*(k+1))/2;

        //cout << sum << rsum << endl;
        if(sum < x || rsum > x)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
        
        
    }
    return 0;
}

/*
*/