//https://www.codechef.com/LTIME94B/problems/RACINGEN
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll ntc;
	cin >> ntc;
	while (ntc--) {
		ll x, r, m;
		cin >> x >> r >> m;
		r = r * 60;
		m = m * 60;
		if (r > m) cout << "NO" << endl;
		else if (x >= r ) cout << "YES" << endl;
		else if (x + 2 * (r - x) <= m) cout << "YES" << endl;
		else cout << "NO" << endl;

	}


	return 0;
}