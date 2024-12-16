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
        f(i,n)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);

            for(auto x : a)
            {
                if(gcd(x,temp) <= 2)
                {
                    flag = true;
                }
            }
        }
        if(flag)
        cout << "YES";
        else
        cout << "NO";

        cout << endl;
          
    }
    return 0;
}