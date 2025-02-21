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
        ll ans = 1;
        string s;
        cin >> s;
        ll best = 0;
        char prev = 'x';
        f(i,n)
        {
            if(s[i] == prev)
            ans++;
            else{
                best = max(best, ans);
                ans = 1;
            }
            prev = s[i];
        }
        best = max(best, ans);
        cout << best+1 << endl;



    }
    return 0;
}