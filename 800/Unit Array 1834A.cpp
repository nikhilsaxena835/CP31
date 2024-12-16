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
        cin >> n;

        ll sum = 0;
        ll negatives = 0;
        for(ll i = n; i >=1 ; i--)
        {
            ll temp;
            cin >> temp;
            if(temp == -1)
            negatives++;
            sum += temp;
        }
        if(sum > 0)
        {
            if(negatives % 2 == 0)
            cout << "0" << endl;
            else{
                cout << "1" << endl;
            }
            continue;
        }
        
        sum = abs(sum);
        ll change = ceil(((double)sum/2));
        negatives -= change;
        if(negatives % 2 == 0)
        {
            cout << change << endl;
        }
        else{    
            cout << change + 1 << endl;
        }    
    }
    return 0;
}