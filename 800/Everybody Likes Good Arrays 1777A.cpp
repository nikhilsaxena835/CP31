#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

ll maxl = INT_MIN;
ll minl = INT_MAX;

using namespace std;

bool comp(pair<char, ll> a, pair<char, ll >b)
{
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;

    while (t--) {
        ll n,m = 0,k = 0;
        bool flag = false;
        cin >> n;
        vector<ll> a;

        ll ans = 0;
        f(i,n)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
            if(i!=0)
            {
                ll j = a.size()-1;
                //cout << a[j-1] << a[j] << endl;
                if(a[j-1]%2 == 1 && a[j] % 2 == 1)
                {
                    a[j-1] = 1;
                    a.pop_back();
                    ans++;
                }
                else if(a[j-1]%2 == 0 && a[j] % 2 == 0)
                {
                    a[j-1] = 0;
                    a.pop_back();
                    ans++;
                }
            }
        }
        cout << ans;
        
        cout << endl;
          
    }
    return 0;
}