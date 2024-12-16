#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

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
        ll maxl = INT_MIN;
        ll minl = INT_MAX;
        f(i,n)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
            maxl = max(maxl,temp);
            minl = min(minl, temp);
        }
        if(maxl == minl)
        {
            cout << "NO";
        }
        else{
            cout << "YES" << endl;
            cout << a[n - 1] << " " << a[0] << " ";
            for (int i = 1; i < n - 1; ++i) {
                cout << a[i] << " ";
            }
        }
        cout << endl;
          
    }
    return 0;
}