/*https://www.codechef.com/UAGA001/problems/HW2C
@ranveerrajput*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n;
	cin >> n;
	vector<pair<ll, ll>> v; // storing the ai and bi

	for (ll i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}

	//sorting accprding to the increasing order of the ai
	sort(v.begin(), v.end());

	ll f = 0;
	for (ll i = 1; i < n; i++) {
		if (v[i].second < v[i - 1].second) {
			f = 1;
			break;
		}
	}

	if (f == 1) cout << v[n - 1].first << endl;
	else cout << v[n - 1].second << endl;

	return 0;
}