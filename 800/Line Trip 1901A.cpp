#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> stations(n + 2);
        
        stations[0] = 0;  
        for (int i = 1; i <= n; i++) {
            cin >> stations[i];
        }
        stations[n + 1] = x; 
                
        ll maxGap = 0;
        for (int i = 1; i < stations.size(); i++) {
            maxGap = max(maxGap, stations[i] - stations[i - 1]);
        }
        maxGap = max(maxGap, 2*(stations[n+1]-stations[n]));
        cout << maxGap << endl;
    }
    
    return 0;
}
