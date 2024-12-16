#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n,m,k;
        cin >> n >> m;

        for(ll i = n; i >=1 ; i--)
        {
            
            if(i%m == 0)
            continue;

            ll next = n - i;
            if(next == 0)
            {
                cout << "1" << endl;
                cout << i << endl;
                break;
             }
            cout << "2" << endl;
            cout << i <<" "<< next << endl;
            break;
        }
         
    }

    return 0;
}


/*

*/