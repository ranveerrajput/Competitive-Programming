#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll miniCost(vector<ll> &dp, vector<ll> &v, int n) {
	dp[0] = 0;
	dp[1] = abs(v[1] - v[0]);
	for (ll i = 2; i < v.size(); i++) {
		if (dp[i] != 0) return dp[i];
		dp[i] = min(dp[i - 1] + abs(v[i] - v[i - 1]), dp[i - 2] + abs(v[i] - v[i - 2]));
	}

	return dp[n - 1];

}



int main() {
	ll n;
	cin >> n;
//	cout << "RANVEER00";
	vector<ll> v;
	for (ll i = 0; i < n; i++) {
		ll ele;
		cin >> ele;
		v.push_back(ele);
	}

	vector<ll> dp(n, 0);

	ll ans = miniCost(dp, v, n);
	cout << ans;

	return 0;
}