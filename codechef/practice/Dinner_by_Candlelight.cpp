//https://www.codechef.com/LTIME94B/problems/DATE1
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll ntc;
	cin >> ntc;
	while (ntc--) {
		ll a, y, x;
		cin >> a >> y >> x;
		if (a >= y) cout << (x * y) << endl;
		else cout << (x * a) + 1 << endl;

	}

	return 0;
}