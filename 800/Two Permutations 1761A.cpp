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
        ll n,m = 0,k = 0;
        bool flag = false;
        cin >> n >> m >> k;

        if((n == m) && (m == k))
        cout << "YES";
        else if(n > m+k+1)
        cout << "YES";
        else
        cout << "NO";
        
        cout << endl;
          
    }
    return 0;
}