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
        ll p,q;
        cin >> p >> q;
        bool flag = true;
    
        for(ll i = 0; i < p; i++)
        {
            ll temp;
            cin >> temp;

            if(temp == q)
            {
                flag = false;
                //break;
            }
        }
        if(flag)
        cout << "No" << endl;
        else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}
