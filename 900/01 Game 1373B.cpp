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

ll helper(ll& n)
{
    ll ans = -1;
    while(n%6 == 0)
    {
        n = n/6;
        ans++;
    }
    return ans+1;
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
        
        string s ;
        cin >> s;
        ll c0 = 0, c1 = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            c0++;
            else
            c1++;
        }
        cout << (min(c0,c1)%2 ? "DA" : "NET") << endl;
    }
        return 0;
    }
    
