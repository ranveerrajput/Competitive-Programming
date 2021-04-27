#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin >> n;
	vector<ll> v;
	for (ll i = 0; i < n; i++) {
		ll ele;
		cin >> ele;
		v.push_back(ele);
	}
	ll ans = 1;
	for (ll i = 1; i < n; i++) {
		if (v[i] != v[i - 1]) ans++;
	}



	cout << ans << endl;




	return 0;
}