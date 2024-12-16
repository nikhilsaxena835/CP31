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
        ll n,m,p;
        cin >> n >> m >> p;

        int turn = 0;
        int winner = 0;
        if(p%2 != 0)
        turn = 1;

        //cout << turn << "Turn " << endl;
        if(turn == 1 && m > n)
        winner = 1;
        else if(turn == 1 && m <= n)
        {
            //cout << "sd";
            winner = 0;}

        if(turn == 0 && n > m)
        winner = 0;
        else if(turn == 0 && n <= m)
        winner = 1;

        if(winner == 1)
        cout << "Second" << endl;
        else{
            cout << "First" << endl;
        }
        
    }

    return 0;
}
