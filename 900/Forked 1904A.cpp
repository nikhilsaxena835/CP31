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
        ll a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;
        set<pair<ll,ll>>s;
        vector<pair<ll, ll>> knight_moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        ll count = 0;

        for (auto move : knight_moves) {
            ll knight_x = xK + move.first;
            ll knight_y = yK + move.second;
            if(s.find({knight_x,knight_y}) != s.end())
            {
                continue;
            }
            s.insert({knight_x, knight_y});
            if (abs(knight_x - xQ) == a && abs(knight_y - yQ) == b) {
                count++;
            } else if (abs(knight_x - xQ) == b && abs(knight_y - yQ) == a) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}

/*
*/