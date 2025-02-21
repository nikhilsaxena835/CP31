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
        unordered_map<ll, ll> mpp;
        bool choice = false;
        ll n, x = -1, m;
        cin >> n;
      
        vector<ll> a (n,0);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll operations = 0;
    
        for (ll i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1] && !choice) {  
                //cout << i << a[i];
            if (a[i] == 0) 
            {   
                cout << -1 << endl;  
                choice = true;
                break;
            }
            a[i] /= 2;  
            operations++;
        }
    }
        if(!choice)
        cout << operations << endl;
        
        }
        return 0;
    }
    
