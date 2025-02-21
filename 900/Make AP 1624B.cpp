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
        //unordered_map<ll, ll> mpp;
        bool choice = false;
        ll n = -1, m, k;
        //cin >> n >> m >> k;
        ll a, b, c;
        cin >> a >> b >> c;
        int new_a = b - (c - b);
        if(new_a >= a && new_a % a == 0 && new_a != 0) {
            cout << "YES\n";
            continue;;
        }

        int new_b = a + (c - a)/2;
        if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0) {
            cout << "YES\n";
            continue;;
        }

        int new_c = a + 2*(b - a);
        if(new_c >= c && new_c % c == 0 && new_c != 0) {
            cout << "YES\n";
            continue;;
        }

        cout << "NO\n";
        

   }
        return 0;
    }
    
