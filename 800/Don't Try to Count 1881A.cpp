#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

bool checkSub(string x, string y) {

    if(x.find(y) != string::npos)
    return true;
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll p,q;
        cin >> p >> q;

        string x,y;
        cin >> x >> y;

        bool flag = false;
        for(ll i = 0; i < 6; i++)
        {
            if(checkSub(x,y))
            {
                cout << i << endl;
                flag = true;
                break;
            }
            x+=x;
        }
        if(!flag)
        cout << "-1" << endl;
        
    }

    return 0;
}
