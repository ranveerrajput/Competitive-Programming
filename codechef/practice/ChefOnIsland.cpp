//https://www.codechef.com/START3C/problems/CCISLAND
//AC

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	ll ntc;
	cin >> ntc;
	while (ntc--) {
		ll a, b, c, d, D;
		cin >> a >> b >> c >> d >> D;
		if (a >= c * D && b >= d * D) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}