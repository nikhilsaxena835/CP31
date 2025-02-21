#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

using namespace std;

ll pow(ll n, ll exp)
{
    
    if(exp == 0)
    return 1;
    if(exp == 1)
    return n;

    ll half = pow(n, exp / 2);
    
    if(exp%2 == 0)
    return half * half;    
    else
    return n * half * half;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;   
    while (t--) {
        //unordered_map<ll, ll> mpp;
        bool choice = false;
        ll n = -1, m, k;
        
        cin >> n;
        vector<ll> vec(n,0);
        ll zeroes = 0, ones = 0;
        for(ll i = 0; i < n; i++)
        {   
            cin >> vec[i];
            if(vec[i] == 0)
            zeroes++;
            if(vec[i] == 1)
            ones++;
        }

        if(ones == 0)
        cout << 0 << endl;
        else{
            //ones--;
            cout << ((ll)ones * (ll)pow(2, zeroes)) << endl;
        }

        
        

   }
        return 0;
    }
    
